from InteractableItem import InteractableItem
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
        	player.inventory.remove(self)

