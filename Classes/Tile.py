import rabbyt
import pyglet
import resources


class Tile(rabbyt.sprites.Sprite):

    def __init__(self,text,x,y):
        texture = resources.silverBox
        super(Tile, self).__init__(texture=texture)
        self.x = x
        self.y = y
        self.text = text
        self.label = (pyglet.text.Label(self.text, font_name = 'Ariel', font_size = 12, 
                        x = self.x, y = self.y,
                        anchor_x = 'center', anchor_y = 'center'))