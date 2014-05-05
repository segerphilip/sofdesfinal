from Items import *
import resources


class Bone(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Bone, self).__init__(*args, **kwargs)
        self.description = "Strong alien animal bone"
        self.texture = resources.boneImage
        self.actions = ['Drop']
        self.weight = 1

    def perform_action(self,player,action):
		if action == 'Drop':
		    player.drop_item(self)