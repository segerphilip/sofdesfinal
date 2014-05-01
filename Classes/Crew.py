from Items import *
from Berry import Berry
from Wood import Wood
from Meat import Meat
from Weapon import Weapon
from random import choice, random
from Event import Event
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

        self.actions = ["Talk", "Feed", "Forage", "Hunt", "Forge"]

    def return_home(self):
        self.viewable = True
        # player.get_item(self.items)
        # self.items = []
        # if len(self.weapons) != 0:
        #     player.weapons.append(self.weapons[0])
        # self.weapons = []

    def perform_action(self, player, action):
        if action is "Talk":
            pass
        elif action == "Forage":
            if "Foraging" not in self.states:
                self.find_food()
                self.states.append("Foraging")
                self.forageTime = 1  # / (.1 * self.skills["Forging"])
                self.skills["Foraging"] += 1
            self.viewable = False

        elif action == "Hunt":
            if "Hunting" not in self.states:
                self.find_meat()
                self.states.append("Hunting")
                self.huntTime = 1  # / (.1 * self.skills["Forging"])
                self.skills["Hunting"] += 1
            self.viewable = False

        elif action == "Build":
            self.skills["Building"] += 1
            self.viewable = False

        elif action == "Forge":
            if "Forging" not in self.states:
                self.states.append("Forging")
                self.forgeTime = 1 / (.1 * self.skills["Forging"])
                self.make_weapon(player)

    def make_weapon(self, player):
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

        self.weaponToMake.append(Weapon(
            range=range, damage=damage, effects=effects, fireRate=fireRate))
        self.skills["Forging"] += 1
        self.viewable = False

    def forge(self, dt):
        if self.forgeTime > 0:
            self.forgeTime -= dt
        else:
            self.weapons.append(self.weaponToMake)
            self.states.remove("Forging")
            self.states.append("Done Forging")
            self.eventsCaused.append(Event(self, "Done Forging"))
            self.return_home()

    def find_food(self):
        if choice(["Berry", "Wood"]) == "Berry":
            for i in xrange(0, int((self.skills["Foraging"] / 5) + random() * self.skills["Foraging"])):
                self.itemsToHave.append(Berry())
        else:
            for i in xrange(0, int((self.skills["Foraging"] / 10) + random() * self.skills["Foraging"] / 2)):
                self.itemsToHave.append(Wood())

    def forage(self, dt):
        if self.forageTime > 0:
            self.forageTime -= dt
        else:
            self.items.append(self.itemsToHave)
            self.states.remove("Foraging")
            self.states.append("Done Foraging")
            self.eventsCaused.append(Event(self, "Done Foraging"))
            self.return_home()

    def find_meat(self):
        for i in xrange(0, int((self.skills["Hunting"] / 5) + random() * self.skills["Hunting"])):
            self.itemsToHave.append(Meat())

    def hunt(self, dt):
        if self.huntTime > 0:
            self.huntTime -= dt
        else:
            self.items.append(self.itemsToHave)
            self.states.remove("Hunting")
            self.states.append("Done Hunting")
            self.eventsCaused.append(Event(self, "Done Hunting"))
            self.return_home()

    def talk(self, player):
        for item in self.items:
            self.player.get_item(item)
            self.eventsCause.append(Event(self, self.states[-1]))

    def update(self, dt):
        if "Forging" in self.states:
            self.forge(dt)
        if "Foraging" in self.states:
            self.forage(dt)
        if "Hunting" in self.states:
            self.hunt(dt)
