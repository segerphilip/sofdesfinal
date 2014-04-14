from Item import Item
from abc import ABCMeta, abstractmethod
from math import pi, cos, sin


class Actor(Item):

    def __init__(self, *args, **kwargs):
        super(Actor, self).__init__(*args, **kwargs)

        self.vx = 0
        self.vy = 0

        self.ax = 0
        self.ay = 0

        self.theta = 0

        self.collideAngle = None

        self.stopX = False
        self.stopY = False

        self.health = 100

    __metaClass__ = ABCMeta

    def check_collisions(self):

        if 5 < self.x < 1595 and 5 < self.y < 895:
            self.enteringRoom = False
            self.newRoom = None
        else:
            self.enteringRoom = True
            if self.x < 5:
                self.newRoom = "left"
                self.collideAngle = pi
            elif self.x > 1595:
                self.newRoom = "right"
                self.collideAngle = 0
            elif self.y < 5:
                self.newRoom = "down"
                self.collideAngle = 3 * pi / 2
            elif self.y > 895:
                self.newRoom = "up"
                self.collideAngle = pi / 2

        if self.collideAngle:
            if cos(self.collideAngle) > 0:
                if self.vx >= 0:
                    self.stopX = True
            else:
                if self.vx <= 0:
                    self.stopX = True

            if sin(self.collideAngle) >= 0:
                if self.vy > 0:
                    self.stopY = True
            else:
                if self.vy <= 0:
                    self.stopY = True

    @abstractmethod
    def set_orientation():
        pass

    @abstractmethod
    def update():
        pass
