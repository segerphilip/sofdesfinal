import resources
import random
from Projectile import Projectile
from math import cos, sin, pi
from Enemy import Enemy


class Death_Jelly(Enemy):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Death_Jelly, self).__init__(*args, **kwargs)
        self.texture = resources.deathJellyImages[0]
        self.animTime = 0
        self.animRate = .15

        self.vt = 50
        self.vMax = self.vt
        self.vu = self.vt

        self.aggroDistance = 1000
        self.attackDistance = 500
        self.damage = .5
        self.range = 500

        self.projectiles = []
        self.projectileTexture = resources.deathJellyProjectileImage
        self.deathImage = random.choice(resources.deathJellyImages)

    def attack(self, player):
        if random.randint(1, 100) <= 5:
            xDisp = self.bounding_radius * cos((self.rot + 90) * pi / 180)
            yDisp = self.bounding_radius * sin((self.rot + 90) * pi / 180)

            projectile = Projectile(
                self.rot + 90, self.range, texture=self.projectileTexture,
                x=self.x + xDisp, y=self.y + yDisp)

            projectile.vt = 50
            self.projectiles.append(projectile)
            print self.projectiles

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
                    if self.texture == resources.deathJellyImages[1]:
                        self.texture = resources.deathJellyImages[0]
                    else:
                        self.texture = resources.deathJellyImages[1]
                    self.animTime = 0
                else:
                    self.animTime += dt

            self.collideAngle = None
