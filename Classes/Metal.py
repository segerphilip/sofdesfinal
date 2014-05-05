from Items import *
import resources


class Metal(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Metal, self).__init__(*args, **kwargs)
        self.description = "A strong but light alien metal"
        self.actions = ['Drop']
        self.texture = resources.metalImage
        self.weight = 5

    def perform_action(self,player,action):
        if action == 'Drop':
            player.drop_item(self)