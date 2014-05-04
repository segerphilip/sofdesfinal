import rabbyt
import pyglet
import resources

class Day_Counter(rabbyt.sprites.Sprite):

    def __init__(self, daysTotal, *args, **kwargs):
        super(Day_Counter, self).__init__(*args, **kwargs)
        self.texture = resources.silver_tile_large
        self.days = daysTotal
        self.title = pyglet.text.Label(
            text="Days to Rescue", font_name='Press Start 2P', font_size=12, bold=False, color=(81,143,90, 255),
            x=self.x, y=self.y + 25,
            anchor_x='center', anchor_y='center')

        self.label = pyglet.text.Label(
            text=str(self.days), font_name='Press Start 2P', font_size=30, bold=False, color=(81,143,90,255),
            x=self.x, y=self.y - 10,
            anchor_x='center', anchor_y='center')

    def update(self):
        self.days = self.days - 1
        self.label.text = str(self.days)

    def render(self):
        super(Day_Counter, self).render()
        self.label.draw()
        self.title.draw()
