#View
class View():
    def __init__(self, model, screen):
        self.model = model
        self.screen = screen
    def update(self, itemList):
        self.screen.clear()
        for item in itemList:
            item.image.blit(item.x, item.y)
        pyglet.app.run()