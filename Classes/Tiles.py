import rabbyt
import pyglet
import resources

class Tile(rabbyt.sprites.Sprite):

    def __init__(self, text, texture,*args, **kwargs):
        super(Tile, self).__init__(*args, **kwargs)
        self.text = text
        self.texture = texture
        #self.labels = [pyglet.text.Label(self.text, font_name='Ariel', font_size=12, 
        #    x=self.x, y=self.y, anchor_x='center', anchor_y='center')]

class Button(Tile):

    def __init__(self, text, texture, *args, **kwargs):
        self.clicked = False
        super(Button, self).__init__(text=text, texture=texture, *args, **kwargs)
        self.labels = [pyglet.text.Label(self.text, font_name='Ariel', font_size=12, 
            x=self.x, y=self.y, anchor_x='center', anchor_y='center')]

    def on_click(self, menu, player, x, y):
        if (x > (self.x - (self.texture.width / 2)) and x < (self.x + (self.texture.width / 2))):
            if (y > (self.y - (self.texture.height / 2)) and y < (self.y + (self.texture.height / 2))):
                self.clicked = not self.clicked
                if self.clicked:
                    menu.trigger.perform_action(player, self.labels[0].text)
            else:
                self.clicked = False
        else:
            self.clicked = False

class InventoryTile(Tile):

    def __init__(self, text, texture, *args, **kwargs):
        super(InventoryTile, self).__init__(text=text, texture=texture, *args, **kwargs)

        self.y_count = self.y - self.texture.height/6
        self.y_weight = self.y - self.texture.height/6
        self.y_description = self.y + self.texture.height/6

        self.label_description = pyglet.text.Label(str(self.text[0]), font_name='Ariel', font_size=12, 
            x=self.x, y=self.y_description, anchor_x='center', anchor_y='center')
        self.label_stats = pyglet.text.Label("Count: " + str(self.text[1]) + "      Weight: " + str(self.text[2]), font_name='Ariel', font_size=12, 
            x=self.x, y=self.y_count, anchor_x='center', anchor_y='center',width=self.texture.width)

        self.labels = [self.label_description, self.label_stats]