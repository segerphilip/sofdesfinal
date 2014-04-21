# All Classes for Game
from Item import Item


class InteractableItem(Item):

    def __init__(self, description=None, *args, **kwargs):
        super(InteractableItem, self).__init__(*args, **kwargs)
        self.description = description
        self.open = False
        self.actions = ['Get', 'Eat', 'Fight']

    def update(self, dt):
        pass

    def on_click(self, x, y):
        if self.open:
            self.open = False
        if(x > (self.x - self.bounding_radius) and x < (self.x + self.bounding_radius)):
            if(y > (self.y - self.bounding_radius) and y < (self.y + self.bounding_radius)):
                self.open = True
