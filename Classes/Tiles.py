import rabbyt
import pyglet
import resources


class Tile(rabbyt.sprites.Sprite):

    def __init__(self, text, *args, **kwargs):
        texture = resources.silver_tile_large
        super(Tile, self).__init__(*args, **kwargs)
        self.text = text
        self.label = (
            pyglet.text.Label(self.text, font_name='Ariel', font_size=12,
                              x=self.x, y=self.y,
                              anchor_x='center', anchor_y='center'))

class ButtonTile(Tile):

    def __init__(self, text, *args, **kwargs):
        texture = resources.silver_tile_small
        super(ButtonTile, self).__init__(text=text, texture=texture, *args, **kwargs)

    def on_click(self, x, y):
        if (x > (self.x - (resources.silver_tile_small.width / 2)) and x < (self.x + (resources.silver_tile_small.width / 2))):
            if (y > (self.y - (resources.silver_tile_small.height / 2)) and y < (self.y + (resources.silver_tile_small.height / 2))):
                # Get Action
                print self.label.text
                return self.label.text
            else:
                return None
        else:
            return None
