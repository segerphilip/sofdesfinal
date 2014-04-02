import pyglet
from pyglet.window import key
import resources
import rabbyt


class model():

    def __init__(self, window):
        self.window = window
        self.player = player_character(
            texture=resources.player_image, x=300, y=400)
        self.sprites = [self.player]


class controller():

    def __init__(self, model):
        self.model = model
        self.key_handler = key.KeyStateHandler()
        self.model.window.push_handlers(self.key_handler)
        self.event_handlers = [self, self.key_handler]

    def checkKeyPress(self):
        if self.key_handler:
            if self.key_handler[key.LEFT]:
                self.model.player.moveLeft()
                # print "Key Pressed!"
            if self.key_handler[key.RIGHT]:
                self.model.player.moveRight()
                # print "Key Pressed!"
            if self.key_handler[key.UP]:
                self.model.player.moveForward()
                # print "Key Pressed!"
            if self.key_handler[key.DOWN]:
                self.model.player.moveBackward()
                # print "Key Pressed!"


class player_character(rabbyt.sprites.Sprite):

    def __init__(self, *args, **kwargs):
        super(player_character, self).__init__(*args, **kwargs)

        self.vx = 0
        self.vy = 0

    def check_bounds(self):
        min_x = -self.texture.width / 2
        min_y = -self.texture.height / 2
        max_x = 800 + self.texture.width / 2
        max_y = 600 + self.texture.height / 2
        if self.x < min_x:
            self.x = max_x
        elif self.x > max_x:
            self.x = min_x
        if self.y < min_y:
            self.y = max_y
        elif self.y > max_y:
            self.y = min_y

    def moveForward(self):
        self.vy = 40

    def moveBackward(self):
        self.vy = -40

    def moveRight(self):
        self.vx = 40

    def moveLeft(self):
        self.vx = -40

    def stop(self):
        self.vx = 0
        self.vy = 0

    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt
        self.check_bounds()

        self.vx = 0
        self.vy = 0


game_window = pyglet.window.Window(800, 600, vsync=False)

m = model(game_window)
c = controller(m)

label = pyglet.text.Label('Pyglet Test',
                          font_name='Liberation Mono',
                          font_size=24,
                          x=game_window.width, y=game_window.height,
                          anchor_x='right', anchor_y='top')


@game_window.event
def on_draw():
    m.window.clear()
    label.draw()
    for sprite in m.sprites:
        sprite.render()


def update(dt):
    c.checkKeyPress()
    m.player.update(dt)

if __name__ == "__main__":
    pyglet.clock.schedule_interval(update, 1 / 120.0)

    pyglet.app.run()
