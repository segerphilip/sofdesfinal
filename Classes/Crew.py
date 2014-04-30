from InteractableItem import InteractableItem
from Berry import Berry
from Wood import Wood
from Weapon import Weapon
from random import choice, random
from math import floor
import resources


class Crew(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Crew, self).__init__(*args, **kwargs)
        self.gender = choice(["Male", "Female"])
        if self.gender is "Male":
            self.name = choice(resources.maleNames)
        else:
            self.name = choice(resources.femaleNames)

        self.skills = {
            "Foraging": random() * 5,
            "Hunting": random() * 5,
            "Building": random() * 5,
            "Forging": random() * 5
        }

        self.items = []
        self.weapons = []

        self.actions = ["Talk", "Feed", "Forage", "Hunt", "Build", "Forge"]

    def return_home(self, player):
        self.viewable = True
        player.get_item(self.items)
        self.items = []
        if len(self.weapons) != 0:
            player.weapons.append(self.weapons[0])
        self.weapons = []

    def perform_action(self, player, action):
        if action is "Talk":
            pass
        elif action == "Forage":
            if choice(["Berry", "Wood"]) == "Berry":
                for i in xrange(0, int((self.skills["Foraging"] / 5) + random() * self.skills["Foraging"])):
                    self.items.append(Berry())
            else:
                for i in xrange(0, int((self.skills["Foraging"] / 10) + random() * self.skills["Foraging"] / 2)):
                    self.items.append(Wood())

            self.skills["Foraging"] += 1
            self.viewable = False

        elif action == "Hunt":
            self.skills["Hunting"] += 1
            self.viewable = False
        elif action == "Build":
            self.skills["Building"] += 1
            self.viewable = False
        elif action == "Forge":
            effects = []
            numEffects = int(self.skills["Forging"] / 5)
            for i in xrange(0, numEffects + 1):
                newEffect = choice(["knock back", "poison", "slow"])
                if newEffect not in effects:
                    effects.append(newEffect)

            damage = self.skills["Forging"] + \
                random() * self.skills["Forging"] * 3
            range = self.skills["Forging"] + \
                random() * self.skills["Forging"] * 100
            fireRate = random() / self.skills["Forging"] * 5

            self.weapons.append(Weapon(
                range=range, damage=damage, effects=effects, fireRate=fireRate))
            self.skills["Forging"] += 1
            self.viewable = False
