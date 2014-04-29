from Room import Room
from Crew import Crew
from Campfire import Campfire
import resources
import random
# generates the main base, standard for every game. Similar to Room

# generates the main base, standard for every game. Similar to Room


class Base(Room):

    def __init__(self, *args, **kwargs):
        self.crewNum = 4
        self.crew = []
        super(Base, self).__init__(*args, **kwargs)

    def generate_room(self):
        # Create campfire
        self.roomItems = [Campfire(x=800, y=450)]
        # For loop to add Crew Members
        for i in range(0, self.crewNum):
            x = random.choice(
                range(self.margin, self.screenWidth - self.margin, self.boxSize))
            y = random.choice(
                range(self.margin, self.screenHeight - self.margin, self.boxSize))
            NewCharacter = Crew(
                texture=random.choice(resources.crewImages), x=x, y=y)
            self.roomItems.append(NewCharacter)
            self.crew.append(NewCharacter)
