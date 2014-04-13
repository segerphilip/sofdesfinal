from Actor import Actor
# character plus attributes, this includes motion and orientation


class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)
        self.enteringRoom = False
        self.newRoom = None
        self.inventory = []

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

    def getItem(self, item):
        self.inventory.append(item)

    def update(self, dt):
        self.check_collisions()
        if not self.stopX:
            self.x += self.vx * dt
        if not self.stopY:
            self.y += self.vy * dt

        self.collidingLeft = False
        self.collidingRight = False
        self.collidingBottom = False
        self.collidingTop = False

        self.stopX = False
        self.stopY = False

        self.vx = 0
        self.vy = 0
