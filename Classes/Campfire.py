from Items import *
import resources


class Campfire(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Campfire, self).__init__(*args, **kwargs)
        self.actions = ['Sleep']
        self.texture = resources.campfireImage

    def update(self, dt):
        pass

    def perform_action(self, player, action):
        if action == 'Sleep':
            player.sleep = True