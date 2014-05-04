# All Classes for Game
import rabbyt
import resources
from Menus import *


class Item(rabbyt.sprites.Sprite):

    def __init__(self, description="Description", *args, **kwargs):
        super(Item, self).__init__(*args, **kwargs)

        self.scale_x = 1
        self.scale_y = 1

        self.inventory_count = 1
        self.weight = 0
        self.description = description

    def update(self, dt):
        pass


class InteractableItem(Item):

    def __init__(self, description="Description", image=resources.treeImage, *args, **kwargs):
        super(InteractableItem, self).__init__(*args, **kwargs)
        self.clicked = False
        self.actions = ['Get']
        self.interactable = True
        self.viewable = True

    def update(self, dt):
        pass

    def perform_action(self, player, action):
        # not necessary?

        if action == 'Get':
            player.get_item(self)
            self.viewable = False
            self.interactable = False

    def on_click(self, model, x, y):

        if self.interactable:
            if (x > (self.x - self.bounding_radius) and x < (self.x + self.bounding_radius)):
                if (y > (self.y - self.bounding_radius) and y < (self.y + self.bounding_radius)):
                    self.clicked = not self.clicked
                    if self.clicked:
                        model.contextMenu = ContextMenu(
                            model=model, trigger=self, options=self.actions, x=self.x, y=self.y)
                        model.contextMenu.construct()
                    else:
                        model.contextMenu.deconstruct()
                else:
                    self.clicked = False
            else:
                self.clicked = False
