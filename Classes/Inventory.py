import kytten  # Pyglet-based GUI library


class Inventory():  # IN DEVELOPMENT sets inventory for character class

    def __init__(self, inventory):
        self.inventory = inventory

    def display_inventory(self):  # (self.inventory):

        # Displays the inventory as text on a screen
        # inventory_disp = ""
        # for i in self.inventory:
        #   inventory_disp += i + "\n"
        # x = game_window.width/2
        # y = game_window.height/2
        # anchor_x = 'center'
        # anchor_y = 'center'
        # label = pyglet.text.Label("INVENTORY \n" + inventory_disp, font_name
        # = 'Calibri', font_size = 12, x, y,anchor_x,anchor_y)

        # GUI display
        dialog = kytten.Dialog(
            kytten.TitleFrame("Inventory",
                              kytten.VerticalLayout([
                                                    kytten.Label(
                                                        "Select dialog to show"),
                                                    kytten.Menu(
                                                        options=[
            "Document", "Form", "Scrollable"],
                                        on_select=on_select),
                                ]),
                        ),
                        window=window, batch=batch, group=fg_group,
                        anchor=kytten.ANCHOR_TOP_LEFT,
                        theme=theme)
# a_test.py
# Copyrighted (C) 2009 by Conrad "Lynx" Wong

# Test dialog using the Kytten GUI

import os
import pyglet
# Disable error checking for increased performance
pyglet.options['debug_gl'] = False
from pyglet import gl

VERSION = '5.9'

import kytten
#from background import Background

# Default theme
theme = kytten.Theme(os.path.join(os.getcwd(), 'theme'), override={
    "gui_color": [255, 255, 255, 255],
    "font_size": 12
})

# Callback functions for dialogs which may be of interest


def on_escape(dialog):
    dialog.teardown()


def create_dropdown_dialog():
    def on_select(choice):
        print "Selected: %s" % choice

    dialog = kytten.Dialog(
        kytten.Frame(
            kytten.VerticalLayout([
                kytten.Label("Inventory:"),
                kytten.Dropdown(['Rock', 'Axe', 'Blueberries'],
                                on_select=on_select),
            ]),
        ),
        window=window, batch=batch, group=fg_group,
        anchor=kytten.ANCHOR_CENTER,
        theme=theme, on_escape=on_escape)


def get_description(item):
    if item == 'Rock':
        return pyglet.text.decode_attributed("""
    Type: Granite{} 
    Amount: 2""")
    elif item == 'Axe':
        return pyglet.text.decode_attributed("""* This axe is starting to get dull. You should sharpen it. *""")
    elif item == 'Blueberries':
        return pyglet.text.decode_attributed("""Amount: 30""")


def open_description(item, text):
    dialog = kytten.Dialog(
            kytten.Frame(
            kytten.Scrollable(
                    kytten.VerticalLayout(
                            [kytten.FoldingSection(item, kytten.VerticalLayout(
                                [kytten.Document(
                                    text, width=300), ]), is_open=True), ],
                            align=kytten.HALIGN_LEFT), height=400)
            ),
            window=window, batch=batch, group=fg_group,
            anchor=kytten.ANCHOR_CENTER,
            theme=theme, on_escape=on_escape)


def on_select(choice):

    if choice == 'Rock':
        open_description("Rock", get_description("Rock"))
    elif choice == 'Axe':
        open_description("Axe", get_description("Axe"))
    elif choice == 'Blueberries':
        open_description("Blueberries", get_description("Blueberries"))

if __name__ == '__main__':
    window = pyglet.window.Window(
        640, 480, caption='Kytten Test %s' % VERSION,
        resizable=True, vsync=False)
    batch = pyglet.graphics.Batch()
    bg_group = pyglet.graphics.OrderedGroup(0)
    fg_group = pyglet.graphics.OrderedGroup(1)

    @window.event
    def on_draw():
        window.clear()
        batch.draw()

    # Update as often as possible (limited by vsync, if not disabled)
    window.register_event_type('on_update')

    def update(dt):
        window.dispatch_event('on_update', dt)
    pyglet.clock.schedule(update)

    # Set up a Dialog to choose test dialogs to show
    dialog = kytten.Dialog(
        kytten.TitleFrame("Inventory",
            kytten.VerticalLayout([
                kytten.Label("Select an item from your bag:"),
                kytten.Menu(options=["Rock", "Axe", "Blueberries"],
                            on_select=on_select),
            ]),
        ),
        window=window, batch=batch, group=fg_group,
        anchor=kytten.ANCHOR_TOP,
        theme=theme)

    # Change this flag to run with profiling and dump top 20 cumulative times
    if True:
        pyglet.app.run()
    else:
        import cProfile
        cProfile.run('pyglet.app.run()', 'kytten.prof')
        import pstats
        p = pstats.Stats('kytten.prof')
        p.strip_dirs()
        p.sort_stats('cumulative')
        p.print_stats(20)
