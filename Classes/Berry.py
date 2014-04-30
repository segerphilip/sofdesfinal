from Food import Food
import resources


class Berry(Food):

    def __init__(self, *args, **kwargs):
        super(Berry, self).__init__(*args, **kwargs)
        self.description = "A strange alien berry"
        self.texture = resources.berryImage
