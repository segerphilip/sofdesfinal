import pyglet
from pyglet.window import key
import resources
import rabbyt
import ABCMeta, abstractmethod

class Actor(Item):
    def __init__(self, *args, **kwargs):
        super(Actor, self).__init__(*args, **kwargs)

        self.vx = 0
        self.vy = 0
        
        self.ax = 0
        self.ay = 0
        
        self.theta = 0
        
        self.health = 100
      
    metaClass = ABCMeta
    
    @abstractmethod
    def set_orientation():
    	pass
      
    @abstractmethod
    def update()
    	pass
    