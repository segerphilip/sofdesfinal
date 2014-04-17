from Actor import Actor
from math import atan, cos, sin, pi
import random


class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, name="enemy", *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)
        self.name = name
        self.vt = 100
        self.vu = self.vt
        self.vTheta = self.rot + 90
        if self.vTheta > 360:
            self.vTheta += -360

#         self.isEnemy = True
# self.attacking=True
#         self.health=100

        # self.attacking=True
        self.health = 100

   # def attack(self):
        # if random.randint(1, 100) < 101:
        #   player.health -= 1
        # print player.health

    def set_orientation(self, targetTheta):
        self.rot = targetTheta

    def stop(self):
        self.vx = 0
        self.vy = 0

    def moveForward(self):
        self.vx = self.vu * cos((self.rot + 90) * pi / 180)
        self.vy = self.vu * sin((self.rot + 90) * pi / 180)

    def check_player_distance(self, playerX, playerY):
        xDistance = playerX - self.x
        yDistance = playerY - self.y
        distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)
        if distance < 1000:

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

            if theta < 0:
                theta += 360

            self.vTheta = theta + 90
            self.vu = 250 * self.vt / (distance ** 1.25 + 20)
            self.set_orientation(theta)
            if distance < 5:
                self.stop()
               # self.attacking=True
        else:
            self.stop()

    def update(self, dt, playerX, playerY):
        self.check_player_distance(playerX, playerY)

        self.x += self.vx * dt
        self.y += self.vy * dt

        self.collideAngle = None
        # if self.attacking == True:
                # self.attack()
