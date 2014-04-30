from Items import *
from Wood import Wood
from Berry import Berry
import resources


class Tree(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Tree, self).__init__(*args, **kwargs)

        self.actions = ['Cut Down', 'Pick']
        self.berries = [Berry()]
        self.growRate = 300
        self.growTime = 0
        self.cut = False

        self.texture = resources.treeImage

    def update(self, dt):
        if not self.cut:
            if self.growTime > self.growRate:
                if len(self.berries) < 5:
                    self.berries.append(Berry())
                self.growTime = 0
            else:
                self.growTime += dt

    def cut_down(self):
        self.texture = resources.stumpImage
        self.interactable = False
        self.berries = []
        self.cut = True

    def perform_action(self, player, action):
        if action == 'Cut Down':
            player.get_item(Wood())
            self.cut_down()
        else:
            for berry in self.berries:
                player.get_item(berry)
