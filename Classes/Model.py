from Character import Character
from Room import Room
from Base import Base
import resources


class Model():  # sets window and player

    def __init__(self, window):
        self.window = window
        print self.window.height
        self.player = Character(
            texture=resources.playerImage, x=300, y=400)
        self.mapSizeX = 3
        self.mapSizeY = 3
        self.baseCoordinate = (self.mapSizeX / 2 + 1, self.mapSizeY / 2 + 1)
        self.createMap()
        self.roomCoordinate = self.baseCoordinate
        self.room = self.map[self.baseCoordinate]
        self.spritesOnScreen = self.room.roomItems
        self.spritesOnScreen.append(self.player)

    def createMap(self):
        self.map = {}
        for row in xrange(1, self.mapSizeX):
            for column in xrange(1, self.mapSizeY):
                if row == self.baseCoordinate[0] and column == self.baseCoordinate[1]:
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
