from Character import Character
from Room import Room
import resources


class Model():  # sets window and player

    def __init__(self, window):
        self.window = window
        self.player = Character(
            texture=resources.player_image, x=300, y=400)
        self.mapSizeX = 3
        self.mapSizeY = 3
        self.baseCoordinate = (mapSizeX / 2 + 1, mapSizeY / 2 + 1)
        self.createMap()
        self.roomCoordinate = baseCoordinate
        self.room = self.map[baseCoordinate]
        self.spritesOnScreen = self.room.roomItems
        self.spritesOnScreen.extend(self.player)

    def createMap(self):
        self.map = {}
        for row in xrange(1, self.mapSizeX):
            for column in xrange(1, self.mapSizeY):
                if row == baseCoordinant[0] and column == baseCoordinant[1]:
                    self.map.update(
                        {(row, column): Base(self.window.height, self.window.width)})
                else:
                    self.map.update(
                        {(row, column): Room(self.window.height, self.window.width)})

    def update(self, dt):
        if self.player.enteringRoom:
            if self.player.newRoom == "up":
                self.roomCoordinate[1] += 1
            elif self.player.newRoom == "down":
                self.roomCoordinate[1] += -1
            elif self.player.newRoom == "right":
                self.roomCoordinate[0] += -1
            elif self.player.newRoom == "left":
                self.roomCoordinate[0] += -1

            self.room = self.map[roomCoordinate]

        for sprite in self.spritesOnScreen:
            sprite.update(dt)
