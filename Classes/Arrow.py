import resources
from Projectile import Projectile


class Arrow(Projectile):

    def __init__(self, *args, **kwargs):
        texture = resources.arrowImage
        super(Arrow, self).__init__(texture=texture, *args, **kwargs)

        self.damage = 50
        self.vt = 200
