from Items import *
from Berry import Berry
from Wood import Wood
from Metal import Metal
from Meat import Meat
from Weapon import Weapon
from random import choice, random, randint
from Event import *
import resources
import responses


class Crew(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Crew, self).__init__(*args, **kwargs)
        self.gender = choice(["Male", "Female"])
        if self.gender is "Male":
            self.name = choice(resources.maleNames)
        else:
            self.name = choice(resources.femaleNames)

        self.personality = choice(list(responses.personalities.iterkeys()))

        self.skills = {
            "Foraging": random() * 5,
            "Hunting": random() * 5,
            "Building": random() * 5,
            "Forging": random() * 5
        }

        self.items = []
        self.itemsToHave = []

        self.weapons = []
        self.weaponToMake = []

        self.states = []
        self.eventsCaused = []

        self.health = 100

        self.actions = ["Talk", "Forage", "Hunt", "Forge", "Feed"]

        self.dead = False
    def return_home(self):
        self.viewable = True
        self.interactable = True
        # player.get_item(self.items)
        # self.items = []
        # if len(self.weapons) != 0:
        #     player.weapons.append(self.weapons[0])
        # self.weapons = []

    def perform_action(self, player, action):
        if action == "Talk":
            self.talk(player)
        elif action == "Forage":
            if "Foraging" not in self.states:
                self.find_food()
                self.states.append("Foraging")
                self.forageTime = 1 + (300 / (self.skills["Foraging"] * .75))
                self.skills["Foraging"] += 1
            self.viewable = False

        elif action == "Hunt":
            if "Hunting" not in self.states:
                self.find_meat()
                self.states.append("Hunting")
                self.huntTime = 1 + (300 / (self.skills["Hunting"] * .75))
                self.skills["Hunting"] += 1
            self.viewable = False

        elif action == "Build":
            self.skills["Building"] += 1
            self.viewable = False

        elif action == "Forge":
            if "Forging" not in self.states:
                enoughWood = False
                enoughMetal = False
                for item in player.inventory:
                    if isinstance(item, Wood):
                        if item.inventory_count > int(2 + .5 * self.skills["Forging"]):
                            enoughWood = True
                    if isinstance(item, Metal):
                        if item.inventory_count > int(2 + .5 * self.skills["Forging"]):
                            enoughMetal = True

                if enoughWood and enoughMetal:
                    for item in player.inventory:
                        if isinstance(item, Wood) or isinstance(item, Metal):
                            item.inventory_count -= int(
                                2 + .5 * self.skills["Forging"])
                    self.states.append("Forging")
                    self.forgeTime = 1 + (300 / (self.skills["Forging"] * .75))
                    self.make_weapon(player)
                    self.viewable = False
                    self.interactable = False
                else:
                    self.eventsCaused.append(Crew_Event(self, "Can't Forge"))

        elif action == "Feed":
            if "Feed" not in self.states:
                self.feed(player)

    def feed(self, player):
        fed = False
        for item in player.inventory:
            if isinstance(item, Berry):
                item.inventory_count -= 1
                if item.inventory_count == 0:
                    player.inventory.remove(item)
                self.health += 25
                fed = True
            if isinstance(item, Meat):
                item.inventory_count -= 1
                if item.inventory_count == 0:
                    player.inventory.remove(item)
                self.health += 25
                fed = True
        if fed:
            self.eventsCaused.append(Crew_Event(self,"Thanks"))
        else:
            self.eventsCaused.append(Crew_Event(self, "No Food"))

    def make_weapon(self, player):
        effects = []
        numEffects = int(self.skills["Forging"] / 5)
        for i in xrange(0, numEffects + 1):
            newEffect = choice(["knock back", "poison", "slow"])
            if newEffect not in effects:
                effects.append(newEffect)

        damage = (self.skills["Forging"] + \
            random() * self.skills["Forging"] * 3.0) + 5.0
        range = self.skills["Forging"] + \
            random() * self.skills["Forging"] * 100.0
        fireRate = random() / (2+self.skills["Forging"] * 6.0)

        self.weaponToMake.append(Weapon(
            range=range, damage=damage, effects=effects, fireRate=fireRate))
        self.skills["Forging"] += 1
        self.viewable = False

    def forge(self, dt):
        if self.forgeTime > 0:
            self.forgeTime -= dt
        else:
            self.weapons.extend(self.weaponToMake)
            self.states.remove("Forging")
            self.states.append("Return Weapon")
            self.eventsCaused.append(Event(self, "Done Forging"))
            self.return_home()

    def find_food(self):
        if choice(["Berry", "Wood"]) == "Berry":
            for i in xrange(0, int((1 + self.skills["Foraging"] / 5) + random() * self.skills["Foraging"])):
                self.itemsToHave.append(Berry())
        else:
            for i in xrange(0, int((1 + self.skills["Foraging"] / 10) + random() * self.skills["Foraging"] / 2)):
                self.itemsToHave.append(Wood())

    def forage(self, dt):
        if self.forageTime > 0:
            self.forageTime -= dt
        else:
            self.items.extend(self.itemsToHave)
            self.states.remove("Foraging")
            self.states.append("Return Food")
            self.eventsCaused.append(Event(self, "Done Foraging"))
            self.return_home()

    def find_meat(self):
        for i in xrange(0, int((self.skills["Hunting"] / 5) + random() * self.skills["Hunting"])):
            self.itemsToHave.append(Meat())

    def hunt(self, dt):
        if self.huntTime > 0:
            self.huntTime -= dt
        else:
            self.items.extend(self.itemsToHave)
            self.states.remove("Hunting")
            self.states.append("Return Meat")
            self.eventsCaused.append(Event(self, "Done Hunting"))
            self.return_home()

    def talk(self, player):
        for item in self.items:
            player.get_item(item)
        player.weapons.extend(self.weapons)
        if len(self.states) > 0:
            self.eventsCaused.append(Event(self, self.states[-1]))
            del self.states[-1]

    def lower_health(self, dt):
        self.health -= .15 * dt

    def calc_probablilties(self):
        if randint(1, 100000) <= 1:
            self.eventsCaused.append(Get_Sick_Event(self, "Sick"))

    def die(self):
        self.eventsCaused.append(Crew_Event(self, "Dead"))
        self.viewable = False
        self.interactable = False
        self.dead = True

    def update(self, dt):
        self.calc_probablilties()
        if "Forging" in self.states:
            self.forge(dt)
        if "Foraging" in self.states:
            self.forage(dt)
        if "Hunting" in self.states:
            self.hunt(dt)

        self.lower_health(dt)
        if self.health <= 30 and "Hungry" not in self.states:
            self.states.append("Hungry")
            self.eventsCaused.append(Event(self, "Hungry"))

        if self.health <= 0 and not self.dead:
            self.die()
