from Items import Item
import resources

# This is the class that defines the Health Bar and how it works for the
# Actor classs


class Health_Bar(Item):

    def __init__(self, *args, **kwargs):
        super(Health_Bar, self).__init__(*args, **kwargs)
        self.texture = resources.healthAmount

    def update(self, health):
        self.health = health
        self.right = 1590
        if health >= 0:
            self.scale_x = (health / 100.0)
