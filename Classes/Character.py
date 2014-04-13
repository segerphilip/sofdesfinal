from Actor import Actor
import resources
from math import cos, sin, atan, pi
# character plus attributes, this includes motion and orientation


class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)
        self.enteringRoom = False
        self.newRoom = None
        self.inventory = []
        self.walkingAnim = resources.playerGrid
        self.animFrame = [0, 0]
        self.timeSinceAnim = 0
        self.animRate = .15
        self.vt = 160

    def moveForward(self):
        self.vy = self.vt * sin((self.rot + 90) * pi / 180)
        self.vx = self.vt * cos((self.rot + 90) * pi / 180)

    def moveBackward(self):
        self.vy = self.vt * sin((self.rot - 90) * pi / 180)
        self.vx = self.vt * cos((self.rot - 90) * pi / 180)

    def moveRight(self):
        self.vy = -self.vt * sin(self.rot * pi / 180)
        self.vx = -self.vt * cos(self.rot * pi / 180)

    def moveLeft(self):
        self.vy = self.vt * sin(self.rot * pi / 180)
        self.vx = self.vt * cos(self.rot * pi / 180)

    def stop(self):
        self.vx = 0
        self.vy = 0

    def set_orientation(self, mouseX, mouseY):
        xDistance = mouseX - self.x
        yDistance = mouseY - self.y
        if xDistance != 0:
            theta = atan(yDistance / xDistance)
            if theta < 0:
                theta += 2 * pi
            if xDistance < 0 and yDistance > 0:
                theta += -pi
            elif xDistance < 0 and yDistance < 0:
                theta += pi
        elif yDistance > 0:
            theta = pi / 2
        else:
            theta = 3 * pi / 2

        theta = theta * 180 / pi - 90
        print theta
        self.rot = theta

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

        if self.vx != 0 or self.vy != 0:
            if 0 < self.rot < 180:
                if self.timeSinceAnim > self.animRate:
                    self.timeSinceAnim = 0
                    if self.animFrame[0] < 3:
                        self.animFrame[0] += 1
                    else:
                        self.animFrame[0] = 0

                    if self.animFrame[1] < 3:
                        self.animFrame[1] += 1
                    else:
                        self.animFrame[1] = 0

                    self.texture = self.walkingAnim[
                        self.animFrame[0], self.animFrame[1]]
                else:
                    self.timeSinceAnim += dt
            else:
                if self.timeSinceAnim > self.animRate:
                    self.timeSinceAnim = 0
                    if self.animFrame[0] > 0:
                        self.animFrame[0] -= 1
                    else:
                        self.animFrame[0] = 3

                    if self.animFrame[1] > 0:
                        self.animFrame[1] -= 1
                    else:
                        self.animFrame[1] = 3

                    self.texture = self.walkingAnim[
                        self.animFrame[0], self.animFrame[1]]
                else:
                    self.timeSinceAnim += dt
        else:
            self.animFrame = [0, 0]
            self.texture = self.walkingAnim[
                self.animFrame[0], self.animFrame[1]]

        self.vx = 0
        self.vy = 0
