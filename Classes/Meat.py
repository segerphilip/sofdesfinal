from Food  import Food
import resources


class Meat(Food):

    def __init__(self, poisoned=False, *args, **kwargs):
        super(Meat, self).__init__(*args, **kwargs)
        self.description = "Some meat you harvested"
        self.poisoned = poisoned
        self.texture = resources.meatImage
