import pyglet
import resources
from Tile import Tile


class ButtonTile(Tile):

    def __init__(self, text, x, y):
        texture = resources.silverBox
        super(Tile, self).__init__(texture=texture)
        self.x = x
        self.y = y
        self.text = text
        self.label = (
            pyglet.text.Label(self.text, font_name='Ariel', font_size=12,
                              x=self.x, y=self.y,
                              anchor_x='center', anchor_y='center'))

    def on_click(self, x, y):
        if (x > (self.x - (resources.silverBox.width / 2)) and x < (self.x + (resources.silverBox.width / 2))):
            if (y > (self.y - (resources.silverBox.height / 2)) and y < (self.y + (resources.silverBox.height / 2))):
                # Get Action
                print self.label.text
                return self.label.text
            else:
                return None
        else:
            return None
