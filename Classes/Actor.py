from Item import Item
from abc import ABCMeta, abstractmethod


class Actor(Item):

    def __init__(self, *args, **kwargs):
        super(Actor, self).__init__(*args, **kwargs)

        self.vx = 0
        self.vy = 0

        self.ax = 0
        self.ay = 0

        self.theta = 0

        self.collidingLeft = False
        self.collidingRight = False
        self.collidingBottom = False
        self.collidingTop = False

        self.stopX = False
        self.stopY = False

        self.health = 100

    __metaClass__ = ABCMeta

    def check_collisions(self):
        if 1 < self.x < 1599 and 1 < self.y < 899:
            self.enteringRoom = False
            self.newRoom = None
        else:
            self.enteringRoom = True
            if self.x < 0:
                self.newRoom = "left"
                self.collidingLeft = True
            elif self.x > 1600:
                self.newRoom = "right"
                self.collidingRight = True
            elif self.y < 0:
                self.newRoom = "down"
                self.collidingBottom = True
            elif self.y > 900:
                self.newRoom = "up"
                self.collidingTop = True

        if self.collidingLeft:
            if self.vx < 0:
                self.stopX = True
        if self.collidingRight:
            if self.vx > 0:
                self.stopX = True
        if self.collidingBottom:
            if self.vy < 0:
                self.stopY = True
        if self.collidingTop:
            if self.vy > 0:
                self.stopY = True

    @abstractmethod
    def set_orientation():
        pass

    @abstractmethod
    def update():
        pass
