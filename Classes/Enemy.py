import resources
import random
from Actor import Actor
from math import atan, cos, sin, pi


class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)
        self.vt = 100
        self.vMax = self.vt
        self.vu = self.vt
        self.vTheta = self.rot + 90
        if self.vTheta > 360:
            self.vTheta += -360

#         self.isEnemy = True
# self.attacking=True
#         self.health=100

        # self.attacking=True
        self.health = 100

    def attack(self, Player):
        if random.randint(1,100) < 20:
            Player.health -= 1
        #print Player.health

    def die(self):
        self.texture = resources.enemyImage
        self.interactable = True
        self.actions = ["Harvest Meat", "Harvest Bones"]
        self.vt = 0

    def perform_action(self, player, action):
        if action is "Harvest Meat":
            pass
        if action is "Harvest Bones":
            pass

    def set_orientation(self, targetTheta):
        self.rot = targetTheta

    def stop(self):
        self.vx = 0
        self.vy = 0

    def moveForward(self):
        self.vx = self.vu * cos((self.rot + 90) * pi / 180)
        self.vy = self.vu * sin((self.rot + 90) * pi / 180)

    def check_player_distance(self, Player):
        xDistance = Player.x - self.x
        yDistance = Player.y - self.y
        distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)
        if distance < 1000: #If one should attack
            #print distance
            if xDistance != 0:
                #print "Attack"
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
            if distance <= 55:
                #print "stopped"
                self.stop()
                self.attack(Player)
        else:
            self.stop()

    def update(self, dt, Player):
        if self.health > 0:
            self.check_player_distance(Player)

            self.x += self.vx * dt
            self.y += self.vy * dt

            if self.poison != 0:
                self.health -= self.poison
                self.poisonTime -= dt
                self.rgba = (0, 1, 0, 1)
                if self.poisonTime < 0:
                    self.poison = 0
                    self.poisonTime = 0
                    self.rgba = (1, 1, 1, 1)

            self.collideAngle = None
            # if self.attacking == True:
                    # self.attack()
