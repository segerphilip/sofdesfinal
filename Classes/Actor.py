from Items import *
from abc import ABCMeta, abstractmethod
from math import pi, cos, sin


class Actor(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Actor, self).__init__(*args, **kwargs)

        self.vx = 0
        self.vy = 0

        self.ax = 0
        self.ay = 0

        self.collideAngle = None

        self.poison = 0
        self.poisonTime = 0

        self.health = 100
        self.defense = 5
        self.inventory = []
        self.projectiles = []

        self.interactable = False

    __metaClass__ = ABCMeta

    def check_collisions(self):
        if 5 < self.x < 1595 and 5 < self.y < 895:
            self.enteringRoom = False
            self.newRoom = None
        else:
            self.enteringRoom = True
            if self.x < 5:
                self.newRoom = "left"
                self.collideAngle = 180
            elif self.x > 1595:
                self.newRoom = "right"
                self.collideAngle = 0
            elif self.y < 5:
                self.newRoom = "down"
                self.collideAngle = 270
            elif self.y > 895:
                self.newRoom = "up"
                self.collideAngle = 90

        if self.collideAngle:
            self.highAngle = self.collideAngle - 90
            self.lowAngle = self.collideAngle + 90

            if self.lowAngle > 360:
                self.lowAngle += -360

            if self.highAngle < 0:
                self.highAngle += 360

            if self.highAngle < self.lowAngle:
                if not (self.lowAngle < self.vTheta < 360) and not (0 < self.vTheta < self.highAngle):
                    self.stop()
            else:
                if not self.lowAngle < self.vTheta < self.highAngle:
                    self.stop()

        self.collideAngle = None

    @abstractmethod
    def set_orientation():
        pass

    @abstractmethod
    def update():
        pass
