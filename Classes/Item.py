import pyglet
from pyglet.window import key
import resources
import rabbyt
import ABCMeta, abstractmethod

#All Classes for Game
class Item(rabbyt.sprites.Sprite):
 
	def __init__(self, *args, **kwargs):
    	super(Item, self).__init__(*args, **kwargs)
       pass
    metaClass = ABCMeta
    
    @abstractmethod
    def is_clicked(self)
    	pass
    