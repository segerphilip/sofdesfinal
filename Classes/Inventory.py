import kytten # Pyglet-based GUI library

class Inventory(): #IN DEVELOPMENT sets inventory for character class
  def __init__(self, Character.inventory):
    self.inventory = Character.inventory

  def display_inventory(self):#(self.inventory):
  	
  	# Displays the inventory as text on a screen
    # inventory_disp = ""
    # for i in self.inventory:
    #   inventory_disp += i + "\n"
    # x = game_window.width/2
    # y = game_window.height/2
    # anchor_x = 'center'
    # anchor_y = 'center'
    # label = pyglet.text.Label("INVENTORY \n" + inventory_disp, font_name = 'Calibri', font_size = 12, x, y,anchor_x,anchor_y)

    # GUI display
	dialog = kytten.Dialog(
		kytten.TitleFrame("Inventory",
			kytten.VerticalLayout([
				kytten.Label("Select dialog to show"),
				kytten.Menu(options = ["Document","Form","Scrollable"],
					on_select = on_select),
				]),
			),
			window = window, batch = batch, group = fg_group,
			anchor = kytten.ANCHOR_TOP_LEFT,
			theme = theme)