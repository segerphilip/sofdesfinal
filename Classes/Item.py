# All Classes for Game
import rabbyt


class Item(rabbyt.sprites.Sprite):

    def __init__(self, *args, **kwargs):
        super(Item, self).__init__(*args, **kwargs)

    def update(self, dt):
        pass
    # @abstractmethod
    # def is_clicked(self):
    #     pass
