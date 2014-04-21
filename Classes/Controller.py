from pyglet.window import key
from pyglet.window import mouse
from InteractableItem import InteractableItem
import resources


class Controller():

    def __init__(self, model):
        self.model = model
        self.key_handler = key.KeyStateHandler()
        self.model.window.push_handlers(self.key_handler)
        self.event_handlers = [self, self.key_handler]
        self.mouseX = 0
        self.mouseY = 0

    # checking the key press and tells the player to move right
    def checkKeyPress(self):
        if self.key_handler:
            if self.key_handler[key.LEFT] or self.key_handler[key.A]:
                self.model.player.moveRight()
                # print "Key Pressed!"
            if self.key_handler[key.RIGHT] or self.key_handler[key.D]:
                self.model.player.moveLeft()
                # print "Key Pressed!"
            if self.key_handler[key.UP] or self.key_handler[key.W]:
                self.model.player.moveForward()
                # print "Key Pressed!"
            if self.key_handler[key.DOWN] or self.key_handler[key.S]:
                self.model.player.moveBackward()
                # print "Key Pressed!"
            if self.key_handler[key.SPACE]:
                self.model.player.weapons[0].fire_projectile(
                    self.model.player, self.model.time)
            if self.key_handler[key.LSHIFT]:
                self.model.player.vt = 360
                self.model.player.animRate = .075
            else:
                self.model.player.vt = 160
                self.model.animRate = .15

    def checkMouseMove(self):
        @self.model.window.event
        def on_mouse_motion(x, y, dx, dy):
            self.mouseX = x
            self.mouseY = y

    def checkMouseClick(self):
        @self.model.window.event
        def on_mouse_press(x, y, button, modifiers):
            if button == mouse.LEFT:

                if self.model.contextMenu.item:
                    self.model.contextMenu.item = None

                for item in self.model.room.roomItems:
                    if isinstance(item, InteractableItem):
                        item.on_click(x, y)
                        if item.open == True:
                            self.model.contextMenu.item = item

                for buttonTile in self.model.contextMenu.button_tiles:
                    if buttonTile.on_click(x, y) == "Get":
                        self.model.player.getItem(self.model.contextMenu.item)
                        del self.model.spritesOnScreen[
                            self.model.spritesOnScreen.index(self.model.contextMenu.item)]

            if button == mouse.RIGHT:
                self.model.player.weapons[1].fire_projectile(
                    self.model.player, self.model.time)

    def update(self):
        self.checkKeyPress()
        self.checkMouseMove()
        self.checkMouseClick()
        self.model.player.set_orientation(self.mouseX, self.mouseY)
