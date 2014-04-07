class Base(Room):#generates the main base, standard for every game. Similar to Room
    def generate_room(self, screenWidth, screenHeight):
        #Initializing variables
        self.roomMap = {}
        self.roomItems = []
        #Settings
        boxSize = 50 #pixel width of each box in the grid
        characterNum = 5
        #For loop to create roomMap
        for i in range (0, characterNum):
            x = random([range(0, screenWidth/boxSize)])
            y = random([range(0, screenHeight/boxSize)]
            roomMap.update({(x,y): Character(characterImage, (boxsize *x) -(boxsize/2), (boxsize *y) -(boxsize/2))})