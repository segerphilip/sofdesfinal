# View
from Item import Item
from Inventory import Inventory
import pyglet
import resources


class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.blackout = pyglet.sprite.Sprite(resources.blackout, x=0, y=0)
        self.blackout.opacity = 0

    def fade_to_black(self):
        self.blackout.opacity += .01
        print self.blackout.opacity

    def update(self):
        self.window.clear()
        self.fade_to_black()
        self.model.room.background.render()
        for sprite in self.model.spritesOnScreen:
            sprite.render()
        for projectile in self.model.projectiles:
            projectile.render()

        self.blackout.draw()

        if self.model.inventoryGUI.open == True:
            self.model.inventoryGUI.main()
