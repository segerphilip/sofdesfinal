# View
from Item import Item
from Inventory import Inventory
import pyglet
import resources


class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.blackout = pyglet.sprite.Sprite(resources.blackout, x=800, y=450)
        self.blackout.opacity = 0

    def fade_to_black(self):
        self.blackout.opacity += .01
        print self.blackout.alpha

    def update(self):
        self.window.clear()
        # self.fade_to_black()
        #self.model.room.background.render()

        for projectile in self.model.projectiles:
            projectile.render()

        for sprite in self.model.spritesOnScreen:
            sprite.render()

        self.blackout.draw()

        if self.model.inventoryGUI.open == True:
            self.model.inventoryGUI.main()
