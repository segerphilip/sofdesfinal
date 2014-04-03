#All our Imports
import pyglet
from pyglet.window import key
import resources
import rabbyt
import ABCMeta, abstractmethod


#Game Objects (not in model)    
game_window = pyglet.window.Window(800, 600, vsync=False)

m = model(game_window)
c = controller(m)
v = view(m)

#Main Game run
@game_window.event#controlling code
def on_draw():
    v.upate()

def update(dt):#updates all the things
    c.checkKeyPress()
    m.sprite.update(dt)

if __name__ == "__main__":
    pyglet.clock.schedule_interval(update, 1 / 120.0)

    pyglet.app.run()