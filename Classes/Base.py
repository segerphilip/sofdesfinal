from Room import Room
from Actor import Actor
import resources
import random
# generates the main base, standard for every game. Similar to Room

# generates the main base, standard for every game. Similar to Room


class Base(Room):

    def __init__(self, *args, **kwargs):
        super(Base, self).__init__(*args, **kwargs)

    def generate_room(self):
        # Initializing variables
        self.roomMap = {}
        self.roomItems = []
        # Settings
        boxSize = 50  # pixel width of each box in the grid
        characterNum = 5
        # For loop to create roomMap
        for i in range(0, characterNum):
            x = random.choice(range(0, self.screenWidth / boxSize))
            y = random.choice(range(0, self.screenHeight / boxSize))
            self.roomMap.update(
                {(x, y): Actor(texture=resources.crewImage, x=(boxSize * x) - (boxSize / 2), y=(boxSize * y) - (boxSize / 2))})
