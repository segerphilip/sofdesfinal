
from Items import *
from Metal import Metal
import resources
from random import choice, randint


class Rock(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Rock, self).__init__(*args, **kwargs)

        self.actions = ['Mine']
        
        self.texture = choice(resources.rockImages)

    def update(self, dt):
        pass


    def perform_action(self, player, action):
        if action == 'Mine':
            for x in xrange(0, randint(0, 5)):
                player.get_item(Metal())
            self.interactable = False
