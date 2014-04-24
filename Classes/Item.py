# All Classes for Game
import rabbyt


class Item(rabbyt.sprites.Sprite):

    def __init__(self, description=None, *args, **kwargs):
        super(Item, self).__init__(*args, **kwargs)
        self.description = description
        self.scale_x = 1.5
        self.scale_y = 1.5


    def update(self, dt):
        pass