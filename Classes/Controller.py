from pyglet.window import key
from pyglet.window import mouse

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
                self.model.player.moveLeft()
                # print "Key Pressed!"
            if self.key_handler[key.RIGHT] or self.key_handler[key.D]:
                self.model.player.moveRight()
                # print "Key Pressed!"
            if self.key_handler[key.UP] or self.key_handler[key.W]:
                self.model.player.moveForward()
                # print "Key Pressed!"
            if self.key_handler[key.DOWN] or self.key_handler[key.S]:
                self.model.player.moveBackward()
                # print "Key Pressed!"
    def checkMouseMove(self):
        @self.model.window.event
        def on_mouse_motion(x, y, dx, dy):
            self.mouseX = x
            self.mouseY = y

    def checkMouseClick(self):
        @self.model.window.event
        def on_mouse_press(x,y, button, modifiers):
            if button == mouse.LEFT:
                for item in self.model.room.roomItems:
                    if (x > (item.x - item.bounding_radius) and x < (item.x + item.bounding_radius)) and (y > (item.y - item.bounding_radius) and y < (item.y + item.bounding_radius)):
                        #self.model.inventoryGUI.open = True
                        print "[Item GUI Here]"

    def update(self):
        self.checkKeyPress()
        self.checkMouseMove()
        self.checkMouseClick()
        self.model.player.set_orientation(self.mouseX, self.mouseY)