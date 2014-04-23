from Item import Item
import resources

# This is the class that defines the Health Bar and how it works for the
# Actor classs


class Health_Bar(Item):

    def __init__(self, *args, **kwargs):
        super(Health_Bar, self).__init__(*args, **kwargs)

    def update(self, health):
        self.health = health

        if health <= 100 and health > 90:
            scale_x = 1.0
        elif health > 80:
            scale_x = 0.9
        elif health > 70:
            self_x = 0.8
        elif health > 60:
            self_x = 0.7
        elif health > 50:
            self_x = 0.6
        elif health > 40:
            self_x = 0.5
        elif health > 30:
            self_x = 0.4
        elif health > 20:
            self_x = 0.3
        elif health > 10:
            self_x = 0.2
        elif health > 0:
            self_x = 0.1
        else:
            self_x = 0
        self.texture = resources.healthAmount(scale_x)