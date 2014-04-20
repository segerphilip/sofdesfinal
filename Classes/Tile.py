import rabbyt

class Tile(rabbyt.sprites.Sprite):

    def __init__(self,label,*args, **kwargs):
        
        super(Tile, self).__init__(*args, **kwargs)
        self.label = label