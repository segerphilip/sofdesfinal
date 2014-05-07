import rabbyt
import pyglet
import resources

class Tile(rabbyt.sprites.Sprite):

    def __init__(self, text, texture,*args, **kwargs):
        super(Tile, self).__init__(*args, **kwargs)
        self.text = text
        self.texture = texture

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

        self.label_description = pyglet.text.Label(text=str(self.text[0]), font_name='Ariel', font_size=12, 
            x=self.x, y=self.y_description, anchor_x='center', anchor_y='center')
        self.label_stats = pyglet.text.Label(text="Count: " + str(self.text[1]) + "      Weight: " + str(self.text[2]), font_name='Ariel', font_size=12, 
            x=self.x, y=self.y_count, anchor_x='center', anchor_y='center',width=self.texture.width)

        self.labels = [self.label_description, self.label_stats]

    def update(self, text):
        self.label_description.text = str(text[0])
        self.label_stats.text = "Count: " + str(text[1]) + "      Weight: " + str(text[2])
        self.labels = [self.label_description, self.label_stats]

class WeaponTile(Tile):

    def __init__(self, *args, **kwargs):
        super(WeaponTile, self).__init__(*args, **kwargs)
        self.viewable = False
        self.spacing = 25
        self.nameY = self.y + 80 - self.spacing
        self.damY = self.y + 80 - self.spacing*2
        self.rangeY = self.y + 80 - self.spacing*4
        self.rofY = self.y + 80 - self.spacing*3


        self.label_name = pyglet.text.Label(str(self.text[0]), font_name='Press Start 2P', font_size=12, 
            x=self.x - self.spacing*5, y=self.nameY, anchor_x='left', anchor_y='top', color=(81,143,90, 255))
        self.label_dam = pyglet.text.Label("Damage: " + str(self.text[1]), font_name='Press Start 2P', font_size=8, 
            x=self.x - self.spacing*5, y=self.damY, anchor_x='left', anchor_y='top', color=(81,143,90, 255))
        self.label_range = pyglet.text.Label("Range: " + str(self.text[2]), font_name='Press Start 2P', font_size=8, 
            x=self.x - self.spacing*5, y=self.rangeY, anchor_x='left', anchor_y='top', color=(81,143,90, 255))
        self.label_rof = pyglet.text.Label("Rate of Fire: " + str(self.text[3]), font_name='Press Start 2P', font_size=8, 
            x=self.x - self.spacing*5, y=self.rofY, anchor_x='left', anchor_y='top', color=(81,143,90, 255))

    def render(self):
        super(WeaponTile, self).render()
        self.label_name.draw()
        self.label_dam.draw()
        self.label_range.draw()
        self.label_rof.draw()

class WeaponBox(object):

    def __init__(self, weapon, x=1450, y=750):
        self.spacing = 0
        self.x = x
        self.y = y
        self.weapon = weapon
        self.texture = resources.weaponBoxImage
        self.background = rabbyt.sprites.Sprite(texture=self.texture, x=self.x, y=self.y)
        if self.weapon:
            self.weapon.x = self.x+self.spacing
            self.weapon.y = self.y-self.spacing

    def render(self):
        self.background.render()
        if self.weapon:
            self.weapon.render()