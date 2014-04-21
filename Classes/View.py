# View
from InteractableItem import InteractableItem
from Health_Bar import Health_Bar
from Actor import Actor
from ButtonTile import ButtonTile
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

        for projectile in self.model.projectiles:
            projectile.render()

        for sprite in self.model.spritesOnScreen:
            sprite.render()

            self.display_context_menu(self.model.spritesOnScreen)
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

        self.display_context_menu(self.model.spritesOnScreen)
        self.blackout.draw()

    def display_context_menu(self, sprites):
        if self.model.contextMenu.item:
            self.model.contextMenu.button_tiles = []
            start_x = self.model.contextMenu.item.x + \
                2 * self.model.contextMenu.item.bounding_radius
            start_y = self.model.contextMenu.item.y + \
                2 * self.model.contextMenu.item.bounding_radius
            for i in range(len(self.model.contextMenu.item.actions)):
                next_x = start_x
                next_y = start_y + i * resources.silverBox.height
                self.model.contextMenu.button_tiles.append(
                    ButtonTile(self.model.contextMenu.item.actions[i], x=next_x, y=next_y))

            for tile in self.model.contextMenu.button_tiles:
                tile.render()
                tile.label.draw()
