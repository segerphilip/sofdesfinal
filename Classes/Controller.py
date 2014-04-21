from pyglet.window import key
from pyglet.window import mouse
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
                # check if an item is clicked
                for item in self.model.room.roomItems:
                    if item.open:
                        item.open = False
                    if(x > (item.x - item.bounding_radius) and x < (item.x + item.bounding_radius)):
                        if(y > (item.y - item.bounding_radius) and y < (item.y + item.bounding_radius)):
                            item.open = True

                # check if a context menu tile is clicked
                for tile in self.model.context_menu.tiles:
                    if (x > (tile.x - (resources.silverBox.width / 2)) and x < (tile.x + (resources.silverBox.width / 2))):
                        if (y > (tile.y - (resources.silverBox.height / 2)) and y < (tile.y + (resources.silverBox.height / 2))):
                            if tile.label.text == "Get":
                                self.model.player.getItem(
                                    self.model.context_menu.item)
                                del self.model.spritesOnScreen[
                                    self.model.spritesOnScreen.index(self.model.context_menu.item)]

            if button == mouse.RIGHT:
                self.model.player.weapons[1].fire_projectile(
                    self.model.player, self.model.time)
                for item in self.model.room.roomItems:
                    if item.open:
                        item.open = False

    def update(self):
        self.checkKeyPress()
        self.checkMouseMove()
        self.checkMouseClick()
        self.model.player.set_orientation(self.mouseX, self.mouseY)
