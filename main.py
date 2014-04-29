# All our Imports
import pyglet
from Classes import *
from pyglet.gl import *

# Game Objects (not in model)
game_window = pyglet.window.Window(fullscreen=True, vsync=False)
m = Model(game_window)
c = Controller(m)
v = View(m)

# Enable Tranparencies
glEnable(GL_BLEND)
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)

# Main Game loop


@game_window.event  # controlling code
def on_draw():
    v.update()


def update(dt):  # updates all the things
    c.update()
    m.update(dt)

if __name__ == "__main__":
    pyglet.clock.schedule_interval(update, 1 / 120.0)
    pyglet.app.run()
