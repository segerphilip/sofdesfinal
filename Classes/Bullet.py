import resources
from Projectile import Projectile


class Bullet(Projectile):

    def __init__(self, *args, **kwargs):
        texture = resources.bulletImage
        super(Bullet, self).__init__(texture=texture, *args, **kwargs)

        self.damage = 1
        self.vt = 700
        self.distanceThreshold = 300
