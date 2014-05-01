from Items import *
import resources


class Wood(Item):

    def __init__(self, *args, **kwargs):
        super(Wood, self).__init__(*args, **kwargs)
        self.description = "Could be a useful building material"
        self.texture = resources.woodImage
