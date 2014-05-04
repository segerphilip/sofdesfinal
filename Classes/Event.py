from random import choice
import responses


class Event(object):

    def __init__(self, cause, type):
        self.cause = cause
        self.type = type

        self.make_text()

        self.handle = False

    def make_text(self):
        self.text = str(self.cause.name) + ": "

        self.flavor = choice(
            responses.personalities[self.cause.personality][self.type])
        self.text += self.flavor


class Crew_Event(Event):

    def __init__(self, *args, **kwargs):
        super(Crew_Event, self).__init__(*args, **kwargs)

class Get_Sick_Event(Crew_Event):
    
    def __init__(self, *args, **kwargs):
        super(Get_Sick_Event, self).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        self.cause.health -= 20

class Map_Event(Event):

    def __init__(self, model, *args, **kwargs):
        super(Crew_Event, self).__init__(*args, **kwargs)
        self.model = model
        self.handle = True

class Enemy_Attack_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Enemy_Attack_Event).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        for crew in self.model.crew:
            crew.health -= 20

class Storm_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Enemy_Attack_Event).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        pass

class Wildfire_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Enemy_Attack_Event).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        pass

class Spring_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Enemy_Attack_Event).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        pass
