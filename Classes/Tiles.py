import rabbyt
import pyglet
import resources

class Tile(rabbyt.sprites.Sprite):

    def __init__(self, text, texture,*args, **kwargs):
        super(Tile, self).__init__(*args, **kwargs)
        self.text = text
        self.texture = texture
        self.label = pyglet.text.Label(self.text, font_name='Ariel', font_size=12, 
            x=self.x, y=self.y, anchor_x='center', anchor_y='center')

class Button(Tile):

    def __init__(self, text, texture, *args, **kwargs):
        self.clicked = False
        super(Button, self).__init__(text=text, texture=texture, *args, **kwargs)

    def on_click(self, menu, player, x, y):
        if (x > (self.x - (self.texture.width / 2)) and x < (self.x + (self.texture.width / 2))):
            if (y > (self.y - (self.texture.height / 2)) and y < (self.y + (self.texture.height / 2))):
                self.clicked = not self.clicked
                if self.clicked:
                    menu.trigger.perform_action(player, self.label.text)
            else:
                self.clicked = False
        else:
            self.clicked = False
