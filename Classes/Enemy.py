from Actor import Actor


class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)

    def set_orientation(self, theta):
        pass

    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt

        self.vx = 0
        self.vy = 0
