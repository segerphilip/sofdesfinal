from InteractableItem import InteractableItem
from random import choice, random
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

        self.inventory = []

        self.actions = ["Talk", "Feed" "Forage", "Hunt", "Build", "Forge"]

    def return_home(self, player):
        player.add_inventory(self.inventory)

    def perform_action(self, player, action):
        if action is "Talk":
            pass
        elif action == "Forage":
            self.skills["Foraging"] += 1
            self.viewable = False
        elif action == "Hunt":
            self.skills["Hunting"] += 1
            self.viewable = False
        elif action == "Build":
            self.skills["Building"] += 1
            self.viewable = False
        elif action == "Forge":
            self.skills["Forging"] += 1
            self.viewable = False
