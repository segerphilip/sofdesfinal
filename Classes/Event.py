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

    def __init__(self, *args, **kwargs):
        super(Map_Event, self).__init__(*args, **kwargs)
        self.handle = True


class Enemy_Attack_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Enemy_Attack_Event, self).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        for crew in self.cause.crew:
            crew.health -= 20
    def make_text(self):
        self.flavor = "Enemies attacked your base! Your crew is hurt"
        self.text = self.flavor

class Storm_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Storm_Event, self).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        for enemy in self.cause.allEnemies:
            if random.randint(1, 100) <= 50:
                enemy.health -= 20
    def make_text(self):
        self.flavor = "A storm hit. Enemies are weak!"
        self.text = self.flavor

class Wildfire_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Wildfire_Event, self).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        for tree in self.cause.allTrees:
            if random.randint(1, 100) <= 50:
                tree.cut_down()
    def make_text(self):
        self.flavor = "A wildfire hit. Some trees have fallen"
        self.text = self.flavor


class Spring_Event(Map_Event):
    def __init__(self, *args, **kwargs):
        super(Spring_Event, self).__init__(*args, **kwargs)
        self.handle = True
    def handle(self):
        self.growRate = self.growRate/2
    def make_text(self):
        self.flavor = "Spring has arrived! Berries are plentiful"
        self.text = self.flavor
