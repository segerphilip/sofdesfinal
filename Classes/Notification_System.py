import rabbyt
import pyglet
import resources


class Notification_System(rabbyt.sprites.Sprite):

    def __init__(self, *args, **kwargs):
        super(Notification_System, self).__init__(*args, **kwargs)
        self.events = []
        self.coordinates = "(0,0)"
        self.texture = resources.notificationBoxTexture

        self.label = (
            pyglet.text.Label(
                text="Welcome", font_name='Press Start 2P', font_size=10, bold=False, color=(81,143,90, 255),
                x=self.x-85, y=self.y+85,
                anchor_x='left', anchor_y='top',
                width=160, multiline=True))

        self.coordinateLabel = (
            pyglet.text.Label(
                text=self.coordinates, font_name='Press Start 2P', font_size=8, color=(81,143,90, 255),
                x=self.x+85, y=self.y - 75,
                anchor_x='right', anchor_y='center'))

        self.empty = False

    def add_events(self, events):
        for event in events:
            self.events.append(event)
        self.update()

    def on_click(self, x, y):
        if self.left < x < self.right and self.bottom < y < self.top:
            if len(self.events) > 0:
                del self.events[-1]
                self.update()
    def update_coordinates(self, coordinates):
        self.coordinateLabel.text = coordinates

    def update(self):
        if len(self.events) > 0:
            self.label.text = self.events[-1].text
            self.empty = False
        else:
            self.empty = True

    def render(self):
        super(Notification_System, self).render()
        if not self.empty:
            self.label.draw()
        self.coordinateLabel.draw()
