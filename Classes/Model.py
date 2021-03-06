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
from Day_Counter import Day_Counter
from Weapon_Gui import Weapon_Gui
from math import atan, pi, sin, cos
import resources
import rabbyt
import random
from Event import *


class Model():  # sets window and player

    def __init__(self, window):
        self.starting = True
        self.running = True
        self.rescue = False
        self.window = window
        self.time = 0

        self.player = Character(
            texture=resources.playerGrid[0], x=300, y=400)
        self.allEnemies = []
        self.allTrees = []
        # Map Creation
        self.mapSizeX = 5
        self.mapSizeY = 5
        self.baseCoordinate = (0, 0)
        self.create_map()
        self.roomCoordinate = self.baseCoordinate
        self.room = self.map[self.roomCoordinate]
        self.newRoom = False
        # Getting Sprites and Attributes
        self.spritesOnScreen = self.room.roomItems
        self.spritesOnScreen.append(self.player)
        self.crew = self.room.crew
        self.actorsOnScreen = [self.player]
        # Day Parameters
        self.day = True
        self.days = 1
        self.daysTotal = 42
        self.dayTime = 300
        # Health bar
        self.Health_Bar = Health_Bar(texture=resources.healthAmount, y=850)
        # Inventory
        self.contextMenu = None
        self.inventoryButton = InventoryButton(
            text='Inventory', texture=resources.inventoryButtonImage, x=75, y=850)
        self.inventoryMenu = None

        self.WeaponGui = Weapon_Gui(self.player.weapons)
        # Day Cycle
        self.DayCounter = Day_Counter(self.daysTotal, x=175, y=75)
        # Notification System
        self.notificationSystem = Notification_System(x=1500, y=100)
        self.eventQueue = []

    def calc_probablilties(self):
        if random.randint(1, 1000000) <= 1:
            self.eventQueue.append(Enemy_Attack_Event(self, "EnemyAttack"))
        elif random.randint(1, 1000000) <= 1:
            self.eventQueue.append(Storm_Event(self, "Storm"))
        elif random.randint(1, 1000000) <= 1:
            self.eventQueue.append(Wildfire_Event(self, "Wildfire"))
        elif random.randint(1, 1000000) <= 1:
            self.eventQueue.append(Spring_Event(self, "Spring"))

    def new_day(self):
        self.days += 1
        self.DayCounter.update()
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.vt /= 3
        for room in self.map.itervalues():
            if not isinstance(room, Base):
                room.update_enemies(self.days)
        print self.days

    def new_night(self):
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.vt *= 3

    def create_map(self):
        self.map = {}
        for row in xrange((-self.mapSizeX - 1) / 2, ((self.mapSizeX - 1) / 2) + 1):
            for column in xrange((-self.mapSizeY - 1) / 2, ((self.mapSizeY - 1) / 2) + 1):
                if row == self.baseCoordinate[0] and column == self.baseCoordinate[1]:
                    self.map.update(
                        {(row, column): Base(self.window.width, self.window.height)})
                else:
                    self.map.update(
                        {(row, column): Room(self.window.width, self.window.height)})
                    self.tempRoom = self.map[(row, column)]
                    self.allEnemies.extend(self.tempRoom.enemies)
                    self.allTrees.extend(self.tempRoom.trees)

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

            for projectile in actor.projectiles:
                for collision in rabbyt.collisions.collide_single(projectile, self.spritesOnScreen):
                    if collision.viewable:
                        if collision != actor:
                            if projectile in actor.projectiles:
                                actor.projectiles.remove(projectile)
                        if isinstance(collision, Character) or isinstance(collision, Enemy) and collision is not actor:
                            collision.health -= actor.damage + \
                                actor.day ** 1.25

    def change_room(self):
        if self.player.newRoom == "up":
            if self.roomCoordinate[1] > -self.mapSizeY / 2:
                self.roomCoordinate = (
                    self.roomCoordinate[0], self.roomCoordinate[1] - 1)
                self.player.enterNewRoom()
                self.newRoom = True
        elif self.player.newRoom == "down":
            if self.roomCoordinate[1] < self.mapSizeY / 2:
                self.roomCoordinate = (
                    self.roomCoordinate[0], self.roomCoordinate[1] + 1)
                self.player.enterNewRoom()
                self.newRoom = True
        elif self.player.newRoom == "right":
            if self.roomCoordinate[0] < self.mapSizeX / 2:
                self.roomCoordinate = (
                    self.roomCoordinate[0] + 1, self.roomCoordinate[1])
                self.player.enterNewRoom()
                self.newRoom = True
        elif self.player.newRoom == "left":
            if self.roomCoordinate[0] > -self.mapSizeX / 2:
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
            self.notificationSystem.update_coordinates(
                str(self.roomCoordinate))

    def return_crew(self):
        for crew in self.crew:
            crew.return_home()

    def update(self, dt):
        self.dt = dt
        self.time += dt
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                if not sprite.dead:
                    sprite.aggro(self.player)

        self.check_collisions()
        self.calc_probablilties()
        for sprite in self.spritesOnScreen:
            if isinstance(sprite, Enemy):
                sprite.update(dt, self.player)
                for projectile in sprite.projectiles:
                    projectile.update(dt)
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

        if self.inventoryMenu and self.inventoryMenu.viewable:
            self.inventoryMenu.update(self.player)

        self.WeaponGui.update(self.player)

        self.running = False
        for crew in self.crew:
            if not crew.dead:
                self.running = True

        if self.player.enteringRoom:
            self.change_room()
        if self.player.health <= 0:
            self.running = False
        if self.days > self.daysTotal:
            self.rescue = True
            self.running = False
