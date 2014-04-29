from Item import Item
import resources


class Bone(Item):

    def __init__(self, *args, **kwargs):
        super(Bone, self).__init__(*args, **kwargs)
        self.description = "Strong alien animal bone"
        self.texture = resources.boneImage
