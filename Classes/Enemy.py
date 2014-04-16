from Actor import Actor
from math import atan, cos, sin, pi
import random


class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)
        self.vt = 100
        self.vTheta = self.rot + 90
        if self.vTheta > 360:
            self.vTheta += -360
        self.isEnemy = True
        #self.attacking=True
        self.health=100

   # def attack(self):	
    	#if random.randint(1, 100) < 101:
    	#	player.health -= 1
    	#print player.health

    def set_orientation(self, targetTheta):
        self.rot = targetTheta

    def stop(self):
        self.vx = 0
        self.vy = 0

    def moveForward(self):
        self.vx = self.vt * cos((self.rot + 90) * pi / 180)
        self.vy = self.vt * sin((self.rot + 90) * pi / 180)

    def check_player_distance(self, playerX, playerY):
        xDistance = playerX - self.x
        yDistance = playerY - self.y
        distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)
        if distance < 300:

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

            self.set_orientation(theta)
            if distance < 100:
                self.stop()
               # self.attacking=True
        else:
            self.stop()

    def update(self, dt, playerX, playerY):
        self.check_player_distance(playerX, playerY)

        self.x += self.vx * dt
        self.y += self.vy * dt

        self.collideAngle = None
        #if self.attacking == True:
        	#self.attack()

