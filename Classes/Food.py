from Items import *
import resources


class Food(InteractableItem):

    def __init__(self, *args, **kwargs):
        super(Food, self).__init__(*args, **kwargs)

    def perform_action(self, player, action):
        if action == 'Get':
            player.get_item(self)
            self.viewable = False
        elif action == 'Eat':
            player.health += 10
            if self.inventory_count > 1:
                self.inventory_count -= 1
            else:
                player.inventory.remove(self)
        elif action == 'Drop':
            player.drop_item(self)
