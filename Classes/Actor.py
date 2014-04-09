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

        self.health = 100

    __metaClass__ = ABCMeta

    @abstractmethod
    def set_orientation():
        pass

    @abstractmethod
    def update():
        pass
