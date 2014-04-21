# View
from Item import Item
from Actor import Actor
from Tile import Tile
import resources
import pyglet


class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.blackout = pyglet.sprite.Sprite(resources.blackout, x=0, y=0)
        self.blackout.opacity = 0

    def fade_to_black(self):
        self.blackout.opacity += .01

    def update(self):
        self.window.clear()
        self.fade_to_black()
        self.model.room.background.render()
        for weapon in self.model.player.weapons:
            for projectile in weapon.projectiles:
                projectile.render()

        for sprite in self.model.spritesOnScreen:
            sprite.render()

        self.display_context_menu(self.model.spritesOnScreen)
        self.blackout.draw()


    def display_context_menu(self, sprites):
        self.model.context_menu.tiles = []
        for sprite in sprites:
            if isinstance(sprite, Item) and not isinstance(sprite, Actor):
                if sprite.open:
                    self.model.context_menu.item = sprite
                    start_x = sprite.x + 2 * sprite.bounding_radius
                    start_y = sprite.y + 2 * sprite.bounding_radius
                    texture = resources.silverBox
                    for i in range(len(sprite.actions)):

                        next_x = start_x
                        next_y = start_y + i * texture.height
                        label = (pyglet.text.Label(sprite.actions[i],
                                                   font_name='Ariel', font_size=12,
                                                   x=next_x, y=next_y,
                                                   anchor_x='center', anchor_y='center'))

                        self.model.context_menu.tiles.append(
                            Tile(label, texture=texture, x=next_x, y=next_y))
        for i in range(len(self.model.context_menu.tiles)):
            self.model.context_menu.tiles[i].render()
            self.model.context_menu.tiles[i].label.draw()
