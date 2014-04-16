# View
from Inventory import Inventory

class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window

    def update(self):
        self.window.clear()
        for sprite in self.model.spritesOnScreen:
            sprite.render()
        self.model.player.render()

        if self.model.inventoryGUI.open == True:
            self.model.inventoryGUI.main()