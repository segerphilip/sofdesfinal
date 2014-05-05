import resources
from Enemy import Enemy


class Death_Chicken(Enemy):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Death_Chicken, self).__init__(*args, **kwargs)
        self.texture = resources.deathChickenImages[0]
        self.animTime = 0
        self.animRate = .15
        self.damage = .1

    def update(self, dt, player):

            self.x += self.vx * dt
            self.y += self.vy * dt

            if self.poison != 0:
                self.health -= self.poison
                self.poisonTime -= dt
                self.rgba = (0, 1, 0, 1)
                if self.poisonTime < 0:
                    self.poison = 0
                    self.poisonTime = 0
                    self.rgba = (1, 1, 1, 1)

            if self.vx != 0 or self.vy != 0:
                if self.animTime > self.animRate:
                    if self.texture == resources.deathChickenImages[1]:
                        self.texture = resources.deathChickenImages[0]
                    else:
                        self.texture = resources.deathChickenImages[1]
                    self.animTime = 0
                else:
                    self.animTime += dt

            self.collideAngle = None
