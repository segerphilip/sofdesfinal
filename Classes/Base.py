from Room import Room
from Crew import Crew
from Campfire import Campfire
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
        self.roomItems = [Campfire(x=800, y=450)]
        self.enemies = []
        self.characters = []
        self.enemyNumber = 0
        self.itemNumber = 0
        self.characterNumber = 0
        # Settings
        boxSize = 50  # pixel width of each box in the grid
        characterNum = 4
        margin = 50        # For loop to create roomMap
        for i in range(0, characterNum):
            x = random.choice(
                range(margin, self.screenWidth - margin, boxSize))
            y = random.choice(
                range(margin, self.screenHeight - margin, boxSize))
            # print((self.screenWidth, self.screenHeight, x,y))
            # self.roomMap.update(
            #     {(x, y): Actor(texture=resources.crewImage, x=(boxSize * x) - (boxSize / 2), y=(boxSize * y) - (boxSize / 2))})
            NewCharacter = Crew(texture=random.choice(resources.crewImages), x=x, y=y)
            self.roomMap.update({(x, y): NewCharacter})
            self.roomItems.append(NewCharacter)
            self.characters.append(NewCharacter)
