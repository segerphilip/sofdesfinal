# All our Imports
import pyglet
from pyglet.window import key
import resources
import rabbyt
from abc import ABCMeta, abstractmethod
from Classes import Actor
from Classes import Base
from Classes import Character
from Classes import Controller
from Classes import Enemy
from Classes import Health_Bar
from Classes import Inventory
from Classes import Item
from Classes import Model
from Classes import Room
from Classes import View

# Game Objects (not in model)
game_window = pyglet.window.Window(800, 600, vsync=False)

m = Model(game_window)
c = Controller(m)
v = View(m)

# Main Game run


@game_window.event  # controlling code
def on_draw():
    v.upate()


def update(dt):  # updates all the things
    c.checkKeyPress()
    m.update(dt)

if __name__ == "__main__":
    pyglet.clock.schedule_interval(update, 1 / 120.0)

    pyglet.app.run()
