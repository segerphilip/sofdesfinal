import kytten  # Pyglet-based GUI library
import os
import pyglet
from pyglet import gl
VERSION = '5.9'

class Inventory():
    
    def __init__(self, inventory, window):
        self.inventory = inventory
        self.window = window
        self.open_dialog = 0
        self.open = False
        
    def main(self):

        batch = pyglet.graphics.Batch()
        bg_group = pyglet.graphics.OrderedGroup(0)
        fg_group = pyglet.graphics.OrderedGroup(1)

        theme = kytten.Theme(os.path.join(os.getcwd(), 'theme'), override={
            "gui_color": [255, 255, 255, 255], "font_size": 12 })

        @self.window.event
        def on_draw():
            self.window.clear()
            batch.draw()

        def on_select(choice):
            if self.open_dialog != 0:
                on_escape(self.open_dialog)
            open_description(choice, choice.description)

        # Update as often as possible (limited by vsync, if not disabled)
        self.window.register_event_type('on_update')

        def on_escape(dialog):
            dialog.teardown()

        def open_description(item, text):
            dialog = kytten.Dialog(
                kytten.Frame(
                    kytten.Document(text, width=300, height=150)
                ),
                window=self.window, batch=batch, group=fg_group,
                anchor=kytten.ANCHOR_CENTER,
                theme=theme, on_escape=on_escape)
            self.open_dialog = dialog

        def update(dt):
            self.window.dispatch_event('on_update', dt)
        
        pyglet.clock.schedule(update)
  
        dialog = kytten.Dialog(
            kytten.TitleFrame("Inventory",
                kytten.VerticalLayout([
                    kytten.Label("Select an item from your bag:"),
                    kytten.Menu(options=self.inventory, on_select=on_select),
                    ]),
            ),
            window=self.window, batch=batch, group=fg_group,
            anchor=kytten.ANCHOR_TOP,
            theme=theme)

        # if True:
        #     pyglet.app.run()
        # else:
        #     import cProfile
        #     cProfile.run('pyglet.app.run()', 'kytten.prof')
        #     import pstats
        #     p = pstats.Stats('kytten.prof')
        #     p.strip_dirs()
        #     p.sort_stats('cumulative')
        #     p.print_stats(20)

# if __name__ == "__main__":
#     inventory = Inventory(['Rock','Axe','Blueberries'],pyglet.window.Window(fullscreen=True, vsync=False))
#     inventory.main()import kytten  # Pyglet-based GUI library
import os
import pyglet
from pyglet import gl
VERSION = '5.9'

class Inventory():
    
    def __init__(self, inventory, window):
        self.inventory = inventory
        self.window = window
        self.open_dialog = 0
        self.open = False
        
    def main(self):

        batch = pyglet.graphics.Batch()
        bg_group = pyglet.graphics.OrderedGroup(0)
        fg_group = pyglet.graphics.OrderedGroup(1)

        theme = kytten.Theme(os.path.join(os.getcwd(), 'theme'), override={
            "gui_color": [255, 255, 255, 255], "font_size": 12 })

        @self.window.event
        def on_draw():
            self.window.clear()
            batch.draw()

        def on_select(choice):
            if self.open_dialog != 0:
                on_escape(self.open_dialog)
            open_description(choice, choice.description)

        # Update as often as possible (limited by vsync, if not disabled)
        self.window.register_event_type('on_update')

        def on_escape(dialog):
            dialog.teardown()

        def open_description(item, text):
            dialog = kytten.Dialog(
                kytten.Frame(
                    kytten.Document(text, width=300, height=150)
                ),
                window=self.window, batch=batch, group=fg_group,
                anchor=kytten.ANCHOR_CENTER,
                theme=theme, on_escape=on_escape)
            self.open_dialog = dialog

        def update(dt):
            self.window.dispatch_event('on_update', dt)
        
        pyglet.clock.schedule(update)
  
        dialog = kytten.Dialog(
            kytten.TitleFrame("Inventory",
                kytten.VerticalLayout([
                    kytten.Label("Select an item from your bag:"),
                    kytten.Menu(options=self.inventory, on_select=on_select),
                    ]),
            ),
            window=self.window, batch=batch, group=fg_group,
            anchor=kytten.ANCHOR_TOP,
            theme=theme)

        # if True:
        #     pyglet.app.run()
        # else:
        #     import cProfile
        #     cProfile.run('pyglet.app.run()', 'kytten.prof')
        #     import pstats
        #     p = pstats.Stats('kytten.prof')
        #     p.strip_dirs()
        #     p.sort_stats('cumulative')
        #     p.print_stats(20)

# if __name__ == "__main__":
#     inventory = Inventory(['Rock','Axe','Blueberries'],pyglet.window.Window(fullscreen=True, vsync=False))
#     inventory.main()