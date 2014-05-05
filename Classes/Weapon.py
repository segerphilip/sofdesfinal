from random import choice, random
import resources
from Projectile import Projectile
from Items import *
from math import cos, sin, pi


class Weapon(InteractableItem):

    def __init__(self, type="Ranged", range=1000, effects=None, damage=10, fireRate=.1):
        super(Weapon, self).__init__()
        self.type = type
        self.effects = effects
        self.damage = damage
        self.fireRate = fireRate
        self.range = range
        self.make_details()
        self.lastShootTime = 0
        self.projectiles = []
        self.actions = ['Drop']

    def make_details(self):
        if self.type == "Ranged":
            self.weaponType = choice(["Bow", "Gun", "Rifle"])
            if self.weaponType == "Bow":
                self.projectileTexture = resources.arrowImage
                self.texture = choice(resources.bowImages)
            elif self.weaponType == "Pistol":
                self.projectileTexture = resources.bulletImage
                self.texture = choice(resources.pistolImages)
            else:
                self.projectileTexture = resources.bulletImage
                self.texture = choice(resources.rifleImages)

        else:
            self.weaponType = choice(["Stick", "Axe", "Sword"])

        self.title = ""

        if self.damage > 100:
            self.title += choice(["Bad-Ass ", "Awesome ", "Bitchn "])
        if self.fireRate < .05:
            self.title += choice(["Zippy ", "Speedy ", "Balls Fast "])

        if self.effects:
            if "knock back" in self.effects:
                self.title += choice(["Forcefull ", "Pushy ", "Knocky Backy "])
                self.knockBackStrength = random() * -10
            if "poison" in self.effects:
                self.title += choice(["Toxic ", "Vitrolic ", "Pestualant "])
                self.poisonStrength = random()
                self.poisonTime = random() * 20
            if "slow" in self.effects:
                self.title += choice(["Retarding ", "Drowsy ", "Sleepy "])
                self.slowStrength = random() * 100
        self.name = self.title + self.weaponType

    def knock_back(self, victim):
        victim.vx = self.knockBackStrength * victim.vu * \
            cos((victim.rot + 90) * pi / 180)
        victim.vy = self.knockBackStrength * victim.vu * \
            sin((victim.rot + 90) * pi / 180)
        victim.vTheta -= 180
        if victim.vTheta < 0:
            victim.vTheta += 360

    def slow(self, victim):
        if victim.vt > victim.vMax / 10:
            victim.vt -= self.slowStrength
        else:
            victim.vt = victim.vMax / 10

    def poison(self, victim):
        victim.poison = self.poisonStrength
        victim.poisonTime = self.poisonTime

    def fire_projectile(self, player, time):
        if time - self.lastShootTime > self.fireRate:
            xDisp = player.bounding_radius * cos((player.rot + 90) * pi / 180)
            yDisp = player.bounding_radius * sin((player.rot + 90) * pi / 180)

            projectile = Projectile(
                player.rot + 90, self.range, texture=self.projectileTexture,
                x=player.x + xDisp, y=player.y + yDisp)

            self.lastShootTime = time

            self.projectiles.append(projectile)

    def generate_text(self):
        return [self.name, str(self.damage), str(self.range), str(self.fireRate)]

    def on_click(self, model, x, y):
        if (x > (self.x - self.bounding_radius) and x < (self.x + self.bounding_radius)):
            if (y > (self.y - self.bounding_radius) and y < (self.y + self.bounding_radius)):
                self.clicked = not self.clicked
                if self.clicked:
                    model.contextMenu = ContextMenu(
                        model=model, trigger=self, options=self.actions, x=self.x + 100, y=self.y - 225)
                    model.contextMenu.construct()
                    model.contextMenu.invMenu = True
                else:
                    model.contextMenu.deconstruct()
            else:
                self.clicked = False
        else:
            self.clicked = False
        return self.clicked

    def perform_action(self, player, action):
        if action == "Drop":
            del player.weapons[player.weapons.index(self)]

    def deal_damage(self, victim, time):
        if self.effects:
            if "knock back" in self.effects:
                self.knock_back(victim)
            if "poison" in self.effects:
                self.poison(victim)
            if "slow" in self.effects:
                self.slow(victim)

        damageToDeal = (self.damage - victim.defense)
        if damageToDeal > 0:
            victim.health -= damageToDeal
