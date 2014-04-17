from Room import Room
from Character import Character
from Item import Item
from Base import Base
from Enemy import Enemy
from Bullet import Bullet
from Inventory import Inventory
from math import atan, pi, sin, cos
import resources
import rabbyt


class Model():  # sets window and player

    def __init__(self, window):
        self.window = window
        self.time = 0
        self.player = Character(
            texture=resources.playerGrid[0], x=300, y=400)
        self.collisionThreshold = 4
        self.mapSizeX = 18
        self.mapSizeY = 18
        self.baseCoordinate = (self.mapSizeX / 2, self.mapSizeY / 2)
        self.create_map()
        self.roomCoordinate = self.baseCoordinate
        self.room = self.map[self.roomCoordinate]
        self.newRoom = False
        self.spritesOnScreen = self.room.roomItems
        self.spritesOnScreen.append(self.player)
        self.actorsOnScreen = self.room.enemies
        self.actorsOnScreen.append(self.player)
        self.inventoryGUI = Inventory(self.player.inventory, self.window)
        self.projectiles = []

    def create_map(self):
        self.map = {}
        for row in xrange(0, self.mapSizeX):
            for column in xrange(0, self.mapSizeY):
                if row == self.baseCoordinate[0] and column == self.baseCoordinate[1]:
                    self.map.update(
                        {(row, column): Base(self.window.width, self.window.height)})
                else:
                    self.map.update(
                        {(row, column): Room(self.window.width, self.window.height)})

    def check_collisions(self):

        for projectile in self.projectiles:
            for collision in rabbyt.collisions.collide_single(projectile, self.spritesOnScreen):
                if not isinstance(collision, Character):
                    if projectile in self.projectiles:
                        self.projectiles.remove(projectile)
                if isinstance(collision, Enemy):
                    if isinstance(projectile, Bullet):
                        collision.vx = -10 * collision.vu * \
                            cos((collision.rot + 90) * pi / 180)
                        collision.vy = -10 * collision.vu * \
                            sin((collision.rot + 90) * pi / 180)
                        collision.vTheta -= 180
                        if collision.vTheta < 0:
                            collision.vTheta += 360

                    collision.health -= projectile.damage
                    if collision.health <= 0:
                        self.actorsOnScreen.remove(collision)
                        self.spritesOnScreen.remove(collision)

        for actor in self.actorsOnScreen:
            for collision in rabbyt.collisions.collide_single(actor, self.spritesOnScreen):
                xDistance = collision.x - actor.x
                yDistance = collision.y - actor.y
                distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)

                if xDistance != 0 and yDistance != 0:
                    theta = atan(yDistance / xDistance)
                    if theta < 0:
                        theta += 2 * pi
                    if xDistance < 0 and yDistance > 0:
                        theta += -pi
                    elif xDistance < 0 and yDistance < 0:
                        theta += pi
                elif yDistance > 0 and xDistance != 0:
                    theta = pi / 2
                elif yDistance < 0 and xDistance != 0:
                    theta = 3 * pi / 2
                else:
                    theta = None

                if theta and distance > 0:
                    actor.collideAngle = theta * 180 / pi
                actor.check_collisions()

    def spawn_bullet(self):
        bullet = self.player.shoot_gun(self.time)
        if bullet:
            self.projectiles.append(bullet)

    def spawn_arrow(self):
        arrow = self.player.shoot_bow(self.time)
        if arrow:
            self.projectiles.append(arrow)

    def change_room(self):
        if self.player.newRoom == "up":
            if self.roomCoordinate[1] > 0:
                self.roomCoordinate = (
                    self.roomCoordinate[0], self.roomCoordinate[1] - 1)
                self.player.enterNewRoom()
                self.newRoom = True
        elif self.player.newRoom == "down":
            if self.roomCoordinate[1] < self.mapSizeY - 1:
                self.roomCoordinate = (
                    self.roomCoordinate[0], self.roomCoordinate[1] + 1)
                self.player.enterNewRoom()
                self.newRoom = True
        elif self.player.newRoom == "right":
            if self.roomCoordinate[0] < self.mapSizeX - 1:
                self.roomCoordinate = (
                    self.roomCoordinate[0] + 1, self.roomCoordinate[1])
                self.player.enterNewRoom()
                self.newRoom = True
        elif self.player.newRoom == "left":
            if self.roomCoordinate[0] > 0:
                self.roomCoordinate = (
                    self.roomCoordinate[0] - 1, self.roomCoordinate[1])
                self.player.enterNewRoom()
                self.newRoom = True

        if self.newRoom:
            self.room = self.map[self.roomCoordinate]
            self.spritesOnScreen = self.room.roomItems
            if self.player not in self.spritesOnScreen:
                self.spritesOnScreen.append(self.player)
            self.actorsOnScreen = self.room.enemies
            self.actorsOnScreen.append(self.player)
            self.newRoom = False

    def update(self, dt):
        self.dt = dt
        self.time += dt
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.moveForward()

        self.check_collisions()

        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.update(dt, self.player.x, self.player.y)
            elif isinstance(sprite, Character):
                sprite.update(dt, self.time)
            else:
                sprite.update(dt)

        for projectile in self.projectiles:
            projectile.update(dt)
            if projectile.kill:
                self.projectiles.remove(projectile)

        if self.player.enteringRoom:
            self.change_room()
