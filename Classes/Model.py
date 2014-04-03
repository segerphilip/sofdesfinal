import pyglet
from pyglet.window import key
import resources
import rabbyt
import ABCMeta, abstractmethod	

class Model(): #sets window and player

    def __init__(self, window):
        self.window = window
        self.player = Character(
            texture=resources.player_image, x=300, y=400)
        self.sprites = [self.player]
        
    def