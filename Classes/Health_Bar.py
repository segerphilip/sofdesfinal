from Items import Item
import resources

# This is the class that defines the Health Bar and how it works for the
# Actor classs


class Health_Bar(Item):

    def __init__(self, *args, **kwargs):
        super(Health_Bar, self).__init__(*args, **kwargs)
        self.background = Item(
            texture=resources.healthBackground, x=1490, y=850)
        self.texture = resources.healthAmount

    def render(self):
        self.background.render()
        super(Health_Bar, self).render()

    def update(self, health):
        self.health = health
        self.right = 1590
        if health >= 0:
            self.scale_x = (health / 100.0)
        if health >= 100:
            self.scale_x = (100.0 / 100.0)