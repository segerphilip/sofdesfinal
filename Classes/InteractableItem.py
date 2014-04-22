# All Classes for Game
from Item import Item


class InteractableItem(Item):

    def __init__(self, description=None, *args, **kwargs):
        super(InteractableItem, self).__init__(*args, **kwargs)
        self.description = description
        self.open = False
        self.actions = ['Get', 'Eat', 'Fight']
        self.interactable = True
        self.viewable = True

    def update(self, dt):
        pass

    def perform_action(self, player, action):
        if action == 'Get':
            player.get_item(self)
            self.viewable = False
            print "Getting Item!"

    def on_click(self, x, y):
        if self.interactable:
            if self.open:
                self.open = False
            if(x > (self.x - self.bounding_radius) and x < (self.x + self.bounding_radius)):
                if(y > (self.y - self.bounding_radius) and y < (self.y + self.bounding_radius)):
                    self.open = True
        else:
            self.open = False
