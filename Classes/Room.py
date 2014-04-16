import random
import resources
from Item import Item
from Enemy import Enemy


# generates game rooms, where players will be transported depending on
# decisions


class Room(object):

    def __init__(self, screenWidth, screenHeight):
        self.screenHeight = screenHeight
        self.screenWidth = screenWidth
        self.background = Item(texture=resources.ground, x=800, y=450)
        self.generate_room()

    def generate_room(self):
        # Initializing variables
        self.roomMap = {}
        self.roomItems = []
        self.enemies = []
        self.enemyNumber = 0
        self.itemNumber = 0
        # Settings
        options = ['Enemy', 'Item']
        objectProbability = .025
        boxSize = 50
        # pixel width of each box in the grid
        # For loop to create roomMap
        for x in xrange(0, self.screenWidth, boxSize):
            for y in xrange(0, self.screenHeight, boxSize):
                # decides if object will be placed(probability)
                if random.choice(range(0, 100)) <= (objectProbability * 100):
                    objectType = random.choice(options)  # creates object type
                    # if object type is enemy: place the object in the
                    # dictionary, and save it to the list
                    if objectType == 'Enemy':
                        self.enemyNumber += 1
                        NewEnemy = Enemy(
                            texture=resources.enemyImage, x=x, y=y)
                        self.roomMap.update({(x, y): NewEnemy})
                        self.roomItems.append(NewEnemy)
                        self.enemies.append(NewEnemy)
                    # if object type is item: place the object in the
                    # dictionary, and save it to the list
                    elif objectType == 'Item':
                        self.itemNumber += 1
                        NewItem = Item(texture=resources.itemImage, x=x, y=y)
                        self.roomMap.update({(x, y): NewItem})
                        self.roomItems.append(NewItem)

        # print "Room Items: " + str(self.roomItems)
        # print "."
        # print "."

    def render_room(self):
        pass
