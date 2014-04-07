from Actor import Actor
# character plus attributes, this includes motion and orientation
class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)

    def moveForward(self):
        self.vy = 40

    def moveBackward(self):
        self.vy = -40

    def moveRight(self):
        self.vx = 40

    def moveLeft(self):
        self.vx = -40

    def stop(self):
        self.vx = 0
        self.vy = 0

    def set_orientation(self, theta):
        pass

    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt

        self.vx = 0
        self.vy = 0
