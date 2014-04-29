import resources
from Tiles import *

class Menu(object):
    def __init__(self):
        self.item = None
        self.tiles = []

    def construct(self):
        self.tiles = []
        start_x = self.item.x + \
            2 * self.item.bounding_radius
        start_y = self.item.y + \
            2 * self.item.bounding_radius
        for i in range(len(self.item.actions)):
            next_x = start_x
            next_y = start_y + i * resources.silver_tile_large.height
            self.tiles.append(
                Tile(text=self.item.actions[i], x=next_x, y=next_y))

    def deconstruct(self):
        self.item = None
        self.tiles = []

    def render(self):
        for tile in self.tiles:
                tile.render()
                tile.label.draw()


class ContextMenu(Menu):

    def __init__(self):
        super(ContextMenu, self).__init__()

    def construct(self):
        self.tiles = []
        start_x = self.item.x + \
            2 * self.item.bounding_radius
        start_y = self.item.y + \
            2 * self.item.bounding_radius
        for i in range(len(self.item.actions)):
            next_x = start_x
            next_y = start_y + i * resources.silver_tile_small.height
            self.tiles.append(
                ButtonTile(text=self.item.actions[i], x=next_x, y=next_y))