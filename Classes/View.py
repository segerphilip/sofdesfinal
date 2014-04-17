# View
from Item import Item
from Inventory import Inventory
import resources
import rabbyt
import pyglet

class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.background = self.model.background
        #self.blackout = pyglet.sprite.Sprite(resources.blackout, x=0, y=0)
        #self.blackout.opacity = 0

    # def fade_to_black(self):
    #     self.blackout.opacity += .01
    #     print self.blackout.opacity

    def update(self):
        numiterations = 0
        self.window.clear()
        #self.background.render()
        #self.fade_to_black()
        #self.model.room.background.render()
        for sprite in self.model.spritesOnScreen:
            sprite.render()
        for projectile in self.model.projectiles:
            projectile.render()

        #self.blackout.draw()

        if self.model.inventoryGUI.open == True:
            self.model.inventoryGUI.main()
