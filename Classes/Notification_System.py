import rabbyt
import pyglet
import resources


class Notification_System(rabbyt.sprites.Sprite):

    def __init__(self, *args, **kwargs):
        super(Notification_System, self).__init__(*args, **kwargs)
        self.events = []
        self.texture = resources.silver_tile_large
        self.label = (
            pyglet.text.Label(text="Welcome", font_name='Ariel', font_size=12,
                              x=self.x, y=self.y,
                              anchor_x='center', anchor_y='center',
                              width=250, multiline=True))
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
