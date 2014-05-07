from Items import *


class Food(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Food, self).__init__(*args, **kwargs)

        self.healing = 10
        self.actions = ['Eat', 'Eat All', 'Drop']

    def perform_action(self, player, action):
        if action == 'Get':
            player.get_item(self)
            self.viewable = False
        elif action == 'Eat':
            player.health += self.healing
            if self.inventory_count > 1:
                self.inventory_count -= 1
            else:
                player.inventory.remove(self)
        elif action == 'Eat All':
            player.health += self.healing * self.inventory_count
            player.inventory.remove(self)
        elif action == 'Drop':
            player.drop_item(self)
