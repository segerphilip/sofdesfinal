import resources
import random
from Actor import Actor
from Meat import Meat
from Bone import Bone
from math import atan, cos, sin, pi


class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, day=1, *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)
        self.vt = 100
        self.vMax = self.vt
        self.vu = self.vt
        self.vTheta = self.rot + 90
        self.damage = 1
        self.day = day
        if self.vTheta > 360:
            self.vTheta += -360

        self.health = 100
        self.dead = False

    def attack(self, player):
        if random.randint(1, 100) < 20:
            player.health -= self.damage * self.day

    def die(self):
        self.texture = resources.deathChicken1Image
        self.interactable = True
        self.actions = ["Get Meat", "Get Bones"]
        self.vt = 0
        self.vx = 0
        self.vy = 0
        self.dead = True

    def perform_action(self, player, action):
        if action is "Get Meat":
            player.get_item(Meat(poisoned=(self.poison != 0)))
            self.interactable = False
        if action is "Get Bones":
            player.get_item(Bone())
            self.interactable = False

    def set_orientation(self, targetTheta):
        self.rot = targetTheta

    def stop(self):
        self.vx = 0
        self.vy = 0

    def moveForward(self):
        self.vx = self.vu * cos((self.rot + 90) * pi / 180)
        self.vy = self.vu * sin((self.rot + 90) * pi / 180)

    def check_player_distance(self, player):
        self.xDistance = player.x - self.x
        self.yDistance = player.y - self.y
        self.distance = ((self.xDistance) ** 2 + (self.yDistance) ** 2) ** (.5)
        if self.xDistance != 0:
            theta = atan(self.yDistance / self.xDistance)
            if theta < 0:
                theta += 2 * pi
            if self.xDistance < 0 and self.yDistance > 0:
                theta += -pi
            elif self.xDistance < 0 and self.yDistance < 0:
                theta += pi
        elif self.yDistance > 0:
            theta = pi / 2
        else:
            theta = 3 * pi / 2

        self.theta = theta * 180 / pi - 90

        if self.theta < 0:
            self.theta += 360

    def aggro(self, player):
        self.check_player_distance(player)
        if self.distance < 1000:
            self.vTheta = self.theta + 90
            self.vu = 250 * self.vt / (self.distance ** 1.25 + 20)
            self.set_orientation(self.theta)
            if self.distance <= 55:
                self.stop()
                self.attack(player)
            else:
                self.moveForward()
        else:
            self.stop()

    def update(self, dt, player):
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
