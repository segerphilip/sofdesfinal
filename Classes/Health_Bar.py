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
            self.texture = resources.healthGrid
        elif health > 80:
            self.texture = resources.healthGrid[:8]
        elif health > 70:
            self.texture = resources.healthGrid[:7]
        elif health > 60:
            self.texture = resources.healthGrid[:6]
        elif health > 50:
            self.texture = resources.healthGrid[:5]
        elif health > 40:
            self.texture = resources.healthGrid[:4]
        elif health > 30:
            self.texture = resources.healthGrid[:3]
        elif health > 20:
            self.texture = resources.healthGrid[:2]
        elif health > 10:
            self.texture = resources.healthGrid[:1]
        elif health > 0:
            self.texture = resources.healthGrid[0]
        else:
            self.texture = resources.healthGrid[:10]
