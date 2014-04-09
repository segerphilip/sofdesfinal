import rabbyt.anims
from Actor import Actor
# character plus attributes, this includes motion and orientation


class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)
        self.enteringRoom = False
        self.newRoom = None

    def moveForward(self):
        self.vy = 160

    def moveBackward(self):
        self.vy = -160

    def moveRight(self):
        self.vx = 160

    def moveLeft(self):
        self.vx = -160

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

        if 1 < self.x < 1599 and 1 < self.y < 899:
            self.enteringRoom = False
            self.newRoom = None
        else:
            self.enteringRoom = True
            if self.x < 0:
                self.newRoom = "left"
                self.collidingLeft = True
            elif self.x > 1600:
                self.newRoom = "right"
                self.collidingRight = True
            elif self.y < 0:
                self.newRoom = "down"
                self.collidingBottom = True
            elif self.y > 900:
                self.newRoom = "up"
                self.collidingTop = True

        if self.collidingLeft:
            if self.vx > 0:
                self.x += self.vx * dt
            self.y += self.vy * dt
        elif self.collidingRight:
            if self.vx < 0:
                self.x += self.vx * dt
            self.y += self.vy * dt
        elif self.collidingBottom:
            if self.vy > 0:
                self.y += self.vy * dt
            self.x += self.vx * dt
        elif self.collidingTop:
            if self.vy < 0:
                self.y += self.vy * dt
            self.x += self.vx * dt
        else:
            self.x += self.vx * dt
            self.y += self.vy * dt

        self.collidingLeft = False
        self.collidingRight = False
        self.collidingBottom = False
        self.collidingTop = False

        self.vx = 0
        self.vy = 0
