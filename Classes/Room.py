import random
import resources
from Items import *
from Death_Chicken import Death_Chicken
from Death_Jelly import Death_Jelly
from Tree import Tree
from Rock import Rock
# generates game rooms, where players will be transported depending on
# decisions


class Room(object):

    def __init__(self, screenWidth, screenHeight):
        # Set Map Settings
        self.boxSize = 50
        self.margin = 50
        self.objectProbability = .025
        self.screenHeight = screenHeight
        self.screenWidth = screenWidth
        self.background = Item(
            texture=random.choice(resources.grasses), x=800, y=450)
        # Initialize Variables for room generation
        self.enemies = []
        self.enemyNumber = 0
        self.itemNumber = 0
        self.roomItems = []
        self.trees = []
        self.generate_room()

    def generate_room(self):
        # Settings
        options = ['Enemy', 'Item']
        # pixel width of each box in the grid
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
                        if random.choice(["Chicken", "Jelly"]) == "Chicken":
                            NewEnemy = Death_Chicken(
                                x=x, y=y)
                        else:
                            NewEnemy = Death_Jelly(x=x, y=y)

                        self.roomItems.append(NewEnemy)
                        self.enemies.append(NewEnemy)
                    # if object type is item: place the object in the
                    # dictionary, and save it to the list
                    elif objectType == 'Item':
                        self.itemNumber += 1
                        if random.choice(["Tree", "Rock"]) == "Tree":
                            NewItem = Tree(x=x, y=y)
                        else:
                            NewItem = Rock(x=x, y=y)

                        self.roomItems.append(NewItem)
                        self.trees.append(NewItem)

        # Test Item!
        self.roomItems.append(Tree(x=100, y=800))


        self.objectProbability = .00125

    def render_room(self):
        pass

    def update_enemies(self, day):
        # For loop to create roomMap
        self.roomItems = [
            item for item in self.roomItems if item not in self.enemies]
        self.enemies = []
        self.enemyNumber = 0
        for x in xrange(self.margin, self.screenWidth - self.margin, self.boxSize):
            for y in xrange(self.margin, self.screenHeight - self.margin, self.boxSize):
                # decides if object will be placed(probability)
                num = random.choice(range(0, 100))
                if num <= (self.objectProbability * 100):
                    add_Enemy = True  # initialize add enemy variable
                    # Checks if item is already at locatiojn
                    for item in self.roomItems:
                        if item.x == x and item.y == y:
                            add_Enemy = False
                    # If item is not already at location, adds new enemy
                    if add_Enemy:
                        if random.choice(["Chicken", "Jelly"]) == "Chicken":
                            NewEnemy = Death_Jelly(
                                x=x, y=y, day=day)
                        else:
                            NewEnemy = Death_Jelly(x=x, y=y, day=day)

                        self.roomItems.append(NewEnemy)
                        self.enemies.append(NewEnemy)
