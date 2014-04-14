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

        else:
            self.stopX = True
            self.stopY = True

    def update(self, dt, playerX, playerY):
        self.check_player_distance(playerX, playerY)

        if not self.stopX:
            self.vx = self.vt * cos((self.rot + 90) * pi / 180)
            self.x += self.vx * dt
        else:
            self.vx = 0

        if not self.stopY:
            self.vy = self.vt * sin((self.rot + 90) * pi / 180)
            self.y += self.vy * dt
        else:
            self.vy = 0

        self.collideAngle = None

        self.stopX = False
        self.stopY = False
