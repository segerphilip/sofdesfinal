from Actor import Actor
# character plus attributes, this includes motion and orientation


class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)
        self.enteringRoom = False
        self.newRoom = None

    def moveForward(self):
        self.vy = 80

    def moveBackward(self):
        self.vy = -80

    def moveRight(self):
        self.vx = 80

    def moveLeft(self):
        self.vx = -80

    def stop(self):
        self.vx = 0
        self.vy = 0

    def set_orientation(self, theta):
        pass

    def enterNewRoom(self):
            self.enteringRoom = True

            if self.newRoom == "left":
                self.x = 1590
            elif self.newRoom == "right":
                self.x = 10
            elif self.newRoom == "up":
                self.y = 10
            elif self.newRoom == "down":
                self.y = 890

    def update(self, dt):

        self.x += self.vx * dt
        self.y += self.vy * dt
        if 1 < self.x < 1599 and 1 < self.y < 899:
            self.enteringRoom = False
            self.newRoom = None
        else:
            self.enteringRoom = True
            if self.x < 0:
                self.newRoom = "left"
                print self.newRoom
                print self.enteringRoom
                self.x += abs(self.vx * dt)
            elif self.x > 1600:
                self.newRoom = "right"
                self.x += -abs(self.vx * dt)
            elif self.y < 0:
                self.newRoom = "down"
                self.y += abs(self.vy * dt)
            elif self.y > 900:
                self.newRoom = "up"
                self.y += -abs(self.vy * dt)

        self.vx = 0
        self.vy = 0
