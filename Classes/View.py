# View
from Inventory import Inventory
from Item import Item
import resources
import rabbyt

class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.background = self.model.background

    def update(self):
        numiterations = 0
        self.window.clear()
        #self.background.render()
        for s in self.model.spritesOnScreen:
            s.render()
            numiterations += 1
        self.model.player.render()

        if self.model.inventoryGUI.open == True:
            self.model.inventoryGUI.main()