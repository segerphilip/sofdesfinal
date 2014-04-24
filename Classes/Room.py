import random
import resources
from Item import Item
from Enemy import Enemy
from InteractableItem import InteractableItem


# generates game rooms, where players will be transported depending on
# decisions


class Room(object):

    def __init__(self, screenWidth, screenHeight):
        #Set Map Settings
        self.boxSize = 75
        self.margin = 50
        self.objectProbability = .025
        self.screenHeight = screenHeight
        self.screenWidth = screenWidth
        self.background = Item(texture=resources.ground, x=800, y=450)
        #Initialize Variables for room generation
        self.enemies = []
        self.enemyNumber = 0
        self.itemNumber = 0
        self.roomItems = []
        self.generate_room()

    def generate_room(self):
        # Settings
        options = ['Enemy', 'Item']
        # For loop to create roomMap
        for x in xrange(self.margin, self.screenWidth - self.margin, self.boxSize):
            for y in xrange(self.margin, self.screenHeight - self.margin, self.boxSize):
                # decides if object will be placed(probability)
                if random.choice(range(0, 100)) <= (self.objectProbability * 100):
                    objectType = random.choice(options)  # creates object type
                    # if object type is enemy: place the object in the
                    # dictionary, and save it to the list
                    if objectType == 'Enemy':
                        self.enemyNumber += 1
                        NewEnemy = Enemy(
                            texture=resources.enemyImage, x=x, y=y)
                        self.roomItems.append(NewEnemy)
                        #self.enemies.append(NewEnemy)
                    # if object type is item: place the object in the
                    # dictionary, and save it to the list
                    elif objectType == 'Item':
                        self.itemNumber += 1
                        NewItem = InteractableItem(texture=resources.itemImage, x=x, y=y)
                        self.roomItems.append(NewItem)

    def render_room(self):
        # For loop to create roomMap
        for x in xrange(self.margin, self.screenWidth - self.margin, self.boxSize):
            for y in xrange(self.margin, self.screenHeight - self.margin, self.boxSize):
                # decides if object will be placed(probability)
                num = random.choice(range(0, 100))
                if num <= (self.objectProbability * 100):
                    add_Enemy == true #initialize add enemy variable
                    #Checks if item is already at locatiojn
                    for item in self.roomItems:
                        if item.x == x and item.y == y:
                            add_Enemy = false
                    #If item is not already at location, adds new enemy
                    if add_Enemy == true:
                        self.enemyNumber += 1
                        NewEnemy = Enemy(texture=resources.enemyImage, x=x, y=y)
                        self.roomItems.append(NewEnemy)