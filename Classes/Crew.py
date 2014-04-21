from Actor import Actor
import resources


class Crew(Actor):

    def __init__(self, *args, **kwargs):
        self.name = "crew"
        super(Crew, self).__init__(*args, **kwargs)

    def update(self, dt):
        pass
