from Item import Item
from math import cos, sin, pi


class Projectile(Item):

    def __init__(self, theta, *args, **kwargs):
        super(Projectile, self).__init__(*args, **kwargs)

        self.vt = 500
        self.vx = 0
        self.vy = 0

        if theta < 0:
            theta += 360
        elif theta > 360:
            theta -= 360
        self.rot = theta
        self.setTrajectory()

    def setTrajectory(self):
        self.vx = self.vt * cos((self.rot) * pi / 180)
        self.vy = self.vt * sin((self.rot) * pi / 180)

    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt
