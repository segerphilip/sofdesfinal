import random

class Room():#generatesgame rooms, where players will be transported depending on decisions 
  def __init__(self, screenWidth, screenHeight):
    generate_room(self, screenWidth, screenHeight)
  def generate_room(self, screenWidth, screenHeight):
    #Initializing variables
    self.roomMap = {}
    self.roomItems = []
    enemyNumber = 0;
    itemNumber = 0;
    #Settings
    options = ['Enemy', 'Item']
    objectProbability = .1
    boxSize = 50; #pixel width of each box in the grid
    #For loop to create roomMap
    for x in range(0, screenWidth, boxSize):
        for y in range(0, screenHeight, boxSize):
            #decides if object will be placed(probability)
            if random.choice([range(0, 100)]) <= (objectProbability * 100):
                objectType = random.choice(options) #creates object type
                #if object type is enemy: place the object in the dictionary, and save it to the list
                if objectType == 'Enemy':
                    enemynumber += 1
                    NewEnemy = Enemy(enemyImage, ((x*boxsize) - boxsize/2, (y*boxsize) - boxsize/2))
                    roomMap.update({(x,y): NewEnemy})
                    roomItems.append(NewEnemy)
                #if object type is item: place the object in the dictionary, and save it to the list
                elif objectType == 'Item':
                    itemNumber += 1
                    'Item' + str(itemNumber) = Item(itemImage, x, y)
                    roomMap.update({(x,y): Item(image, x, y)})
                    roomItems.append('Item' + str(itemNumber))
  def render_room(self):
    pass