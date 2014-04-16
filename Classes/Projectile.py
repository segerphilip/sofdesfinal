from Item import Item
from math import cos, sin
class Projectile(Item):
    def __init__(self, theta, *args, **kwargs):
        super(Projectile, self).__init__(*args, **kwargs)

        self.vt = 100
        self.vx = 0
        self.vy = 0

        self.rot = theta
        self.setTrajectory()

    def setTrajectory(self):
        self.vx = self.vt*cos(self.rot)
        self.vy = self.vt*sin(self.rot)

    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt
