from Item import Item
import resources


class Meat(Item):

    def __init__(self, poisoned=False, *args, **kwargs):
        super(Meat, self).__init__(*args, **kwargs)
        self.description = "Some meat you harvested"
        self.poisoned = poisoned
        self.texture = resources.meatImage
