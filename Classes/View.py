# View
class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window

    def update(self):
        self.window.clear()
        for sprite in self.model.spritesOnScreen:
            sprite.render()
        # for item in itemList:
        #     item.image.blit(item.x, item.y)
        # pyglet.app.run()
