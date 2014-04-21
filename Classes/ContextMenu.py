import resources
from ButtonTile import ButtonTile


class ContextMenu():

    def __init__(self, item=None):
        self.item = item
        self.button_tiles = []

    def construct(self):
        self.button_tiles = []
        start_x = self.item.x + \
            2 * self.item.bounding_radius
        start_y = self.item.y + \
            2 * self.item.bounding_radius
        for i in range(len(self.item.actions)):
            next_x = start_x
            next_y = start_y + i * resources.silverBox.height
            self.button_tiles.append(
                ButtonTile(self.item.actions[i], x=next_x, y=next_y))

    def deconstruct(self):
        self.item = None
        self.button_tiles = []

    def render(self):
        for tile in self.button_tiles:
                tile.render()
                tile.label.draw()
