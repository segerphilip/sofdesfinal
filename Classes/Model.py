from Room import Room
from Character import Character
from Base import Base
from Enemy import Enemy
from Crew import Crew
from Menus import *
from Tiles import *
from Inventory import *
from Health_Bar import Health_Bar
from Notification_System import Notification_System
from math import atan, pi, sin, cos
import resources
import rabbyt


class Model():  # sets window and player

    def __init__(self, window):
        self.running = True
        self.window = window
        self.time = 0

        self.player = Character(
            texture=resources.playerGrid[0], x=300, y=400)

        self.mapSizeX = 5
        self.mapSizeY = 5
        self.baseCoordinate = (self.mapSizeX / 2, self.mapSizeY / 2)
        self.create_map()
        self.roomCoordinate = self.baseCoordinate
        self.room = self.map[self.roomCoordinate]
        self.newRoom = False

        self.spritesOnScreen = self.room.roomItems
        self.spritesOnScreen.append(self.player)
        self.crew = self.room.crew
        self.actorsOnScreen = [self.player]

        self.day = 1
        self.dayTime = 300

        self.Health_Bar = Health_Bar(texture=resources.healthAmount, y=850)

        self.contextMenu = None
        self.inventoryButton = InventoryButton(text='Inventory', texture=resources.silver_tile_small, x=75, y=850)
        self.inventoryMenu = None

        self.notificationSystem = Notification_System(x=1450, y=50)
        self.eventQueue = []

    def new_day(self):
        self.day += 1
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.vt /= 3
        for room in self.map.itervalues():
            if not isinstance(room, Base):
                room.update_enemies(self.day)

    def new_night(self):
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.vt *= 3

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
        for weapon in self.player.weapons:
            for projectile in weapon.projectiles:
                for collision in rabbyt.collisions.collide_single(projectile, self.spritesOnScreen):
                    if collision.viewable:
                        if not isinstance(collision, Character):
                            if projectile in weapon.projectiles:
                                weapon.projectiles.remove(projectile)
                        if isinstance(collision, Enemy):
                            weapon.deal_damage(collision, self.time)

        for actor in self.actorsOnScreen:
            for collision in rabbyt.collisions.collide_single(actor, self.spritesOnScreen):
                if collision.viewable:
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

    def return_crew(self):
<<<<<<< HEAD
        for crew in self.crew:
                crew.return_home()

    # def health_shrink(self):
    #     '''Health slowly lowers over time'''
    #     self.player.health -= .01
=======
        for sprite in self.map[self.baseCoordinate].roomItems:
            if isinstance(sprite, Crew):
                sprite.return_home(self.player)
>>>>>>> 336be13427d0f00b9c6db7402d28ccd03590253f

    def update(self, dt):
        self.dt = dt
        self.time += dt
<<<<<<< HEAD
        # self.health_shrink()
=======
>>>>>>> 336be13427d0f00b9c6db7402d28ccd03590253f
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                if not sprite.dead:
                    sprite.aggro(self.player)

        self.check_collisions()

        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.update(dt, self.player)
                if sprite.health <= 0:
                    sprite.die()
            elif isinstance(sprite, Character):
                sprite.update(dt, self.time)
            elif isinstance(sprite, Crew):
                sprite.update(self.dt)
                if sprite.eventsCaused not in self.eventQueue:
                    for event in sprite.eventsCaused:
                        self.eventQueue.append(event)
                    sprite.eventsCaused = []
            else:
                sprite.update(dt)

        for weapon in self.player.weapons:
            for projectile in weapon.projectiles:
                projectile.update(dt)
                if projectile.kill:
                    weapon.projectiles.remove(projectile)

        self.notificationSystem.add_events(
            [event for event in self.eventQueue if event not in self.notificationSystem.events])

        for event in self.eventQueue:
            if not event.handle:
                self.eventQueue.remove(event)

        self.Health_Bar.update(self.player.health)

        if self.player.enteringRoom:
            self.change_room()
        if self.player.health <= 0:
            self.running = False
