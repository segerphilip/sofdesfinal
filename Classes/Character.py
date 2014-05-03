from Actor import Actor
from Weapon import Weapon
import resources
from math import cos, sin, atan, pi
from random import random, choice
# character plus attributes, this includes motion and orientation


class Character(Actor):

    def __init__(self, *args, **kwargs):
        super(Character, self).__init__(*args, **kwargs)
        self.enteringRoom = False
        self.newRoom = None

        self.walkingAnim = resources.playerGrid
        self.animFrame = [0, 0]
        self.timeSinceAnim = 0
        self.animRate = .125

        self.vt = 160
        self.vTheta = self.rot
        self.movingBackward = False

        self.weapons = [Weapon(effects=[choice(["knock back", "slow", "poison"])], range=random() * 1600, damage=random() * 110, fireRate=random()), Weapon(
            effects=[choice(["knock back", "slow", "poison"])], range=random() * 1600, damage=random() * 110, fireRate=random())]

        self.weaponNum = 0
        self.weapon = self.weapons[self.weaponNum]
        self.toggleRate = .15
        self.lastToggleTime = 0

        self.sleep = False

    def moveForward(self):
        self.vy = self.vt * sin((self.rot + 90) * pi / 180)
        self.vx = self.vt * cos((self.rot + 90) * pi / 180)
        self.vTheta = self.rot + 90

    def moveBackward(self):
        self.vy = self.vt * sin((self.rot - 90) * pi / 180)
        self.vx = self.vt * cos((self.rot - 90) * pi / 180)

        self.vTheta = self.rot - 90
        if self.vTheta < 0:
            self.vTheta += 360

    def moveRight(self):
        self.vy = -self.vt * sin(self.rot * pi / 180)
        self.vx = -self.vt * cos(self.rot * pi / 180)
        self.vTheta = self.rot
        if self.vTheta < 0:
            self.vTheta += 360

    def moveLeft(self):
        self.vy = self.vt * sin(self.rot * pi / 180)
        self.vx = self.vt * cos(self.rot * pi / 180)
        self.vTheta = self.rot - 180
        if self.vTheta < 0:
            self.vTheta += 360

    def stop(self):
        self.vx = 0
        self.vy = 0

    def set_orientation(self, mouseX, mouseY):
        xDistance = mouseX - self.x
        yDistance = mouseY - self.y
        distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)

        if distance < 5:
            self.stop()

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
        self.rot = theta

    def enterNewRoom(self):
        self.enteringRoom = False

        if self.newRoom == "left":
            self.x = 1590
        elif self.newRoom == "right":
            self.x = 10
        elif self.newRoom == "up":
            self.y = 10
        elif self.newRoom == "down":
            self.y = 890

        self.newRoom = None

    def get_item(self, item):

        in_inv = False
        for i in self.inventory:
            if type(i) == type(item):
                in_inv = True
        if in_inv:
            i.inventory_count += 1
        else:
            self.inventory.append(item)

    def drop_item(self, item):
        self.inventory.remove(item)

    def toggle_weapons(self, time):
        if time - self.lastToggleTime > self.toggleRate:
            if self.weaponNum < len(self.weapons) - 1:
                self.weaponNum += 1
            else:
                self.weaponNum = 0

            self.lastToggleTime = time
            self.weapon = self.weapons[self.weaponNum]

    def health_shrink(self, dt):
        '''Health slowly lowers over time'''
        self.health -= .5 * dt

    def update(self, dt, time):
        self.x += self.vx * dt
        self.y += self.vy * dt

        if self.vx != 0 or self.vy != 0:
                if time - self.timeSinceAnim > self.animRate:
                    self.timeSinceAnim = 0

                    if self.animFrame[0] < 3:
                        self.animFrame[0] += 1
                    else:
                        self.animFrame[0] = 0
                        if self.animFrame[1] > 0:
                            self.animFrame[1] -= 1
                        else:
                            self.animFrame[1] = 3
                    self.texture = self.walkingAnim[
                        self.animFrame[0], self.animFrame[1]]
                    self.timeSinceAnim = time
        else:
            self.animFrame = [0, 0]
            self.texture = self.walkingAnim[
                self.animFrame[0], self.animFrame[1]]

        self.vx = 0
        self.vy = 0

        self.stopX = False
        self.stopY = False
        self.health_shrink(dt)
