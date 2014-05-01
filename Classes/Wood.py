from Items import *
import resources


class Wood(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Wood, self).__init__(*args, **kwargs)
        self.description = "Could be a useful building material"
        self.actions = ['Drop']
        self.texture = resources.woodImage

    def perform_action(self,player,action):
		if action == 'Drop':
		    player.drop_item(self)