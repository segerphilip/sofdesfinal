from Actor import Actor
from math import atan, cos, sin, pi


class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)
        self.vt = 100

    def set_orientation(self, targetTheta):
        pass

    def check_player_distance(self, playerX, playerY):
        xDistance = playerX - self.x
        yDistance = playerY - self.y
        distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)
        if distance < 1000:
            if xDistance != 0:
                theta = atan(yDistance / xDistance)
            else:
                theta = pi / 2

            if xDistance > 0 and yDistance > 0:
                self.vx = self.vt * cos(theta) / (distance / 100 + 1)
                self.vy = self.vt * sin(theta) / (distance / 100 + 1)
            elif xDistance < 0 and yDistance > 0:
                self.vx = -self.vt * cos(theta) / (distance / 100 + 1)
                self.vy = -self.vt * sin(theta) / (distance / 100 + 1)
            elif xDistance > 0 and yDistance < 0:
                self.vx = self.vt * cos(theta) / (distance / 100 + 1)
                self.vy = self.vt * sin(theta) / (distance / 100 + 1)
            else:
                self.vx = -self.vt * cos(theta) / (distance / 100 + 1)
                self.vy = -self.vt * sin(theta) / (distance / 100 + 1)

    def update(self, dt, playerX, playerY):
        self.check_player_distance(playerX, playerY)
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
