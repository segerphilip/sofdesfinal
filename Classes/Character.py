from Actor import Actor
# character plus attributes, this includes motion and orientation


class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)
        self.enteringNewRoom = False
        self.newRoom = None

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

        if 0 < self.x < 1600 and 0 < self.y < 900:
            self.enteringNewRoom = False
            self.newRoom = None

        else:
            if self.x < 0:
                self.newRoom = "left"
            elif self.x > 1600:
                self.newRoom = "right"
            elif self.y < 0:
                self.newRoom = "top"
            elif self.y > 900:
                self.newRoom = "bottom"

        self.vx = 0
        self.vy = 0
