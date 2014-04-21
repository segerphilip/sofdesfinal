# View
from Health_Bar import Health_Bar
from Actor import Actor
import resources
import pyglet


class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.blackout = pyglet.sprite.Sprite(resources.blackout, x=0, y=0)
        self.blackout.opacity = 0

    def fade_to_black(self):
        self.blackout.opacity += .05

    def update(self):
        self.window.clear()
        self.fade_to_black()
        # self.model.room.background.render()

        for sprite in self.model.spritesOnScreen:
            sprite.render()

        self.blackout.draw()

        self.model.room.background.render()
        for weapon in self.model.player.weapons:
            for projectile in weapon.projectiles:
                projectile.render()

        self.model.inventoryButton.render()
        self.model.inventoryButton.label.draw()

        # self.model.HealthBar.render()

        for sprite in self.model.spritesOnScreen:
            sprite.render()

        self.model.contextMenu.render()
        self.blackout.draw()
