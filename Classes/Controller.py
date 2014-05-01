from pyglet.window import key
from pyglet.window import mouse
from InteractableItem import InteractableItem


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
            if self.key_handler[key.RIGHT] or self.key_handler[key.D]:
                self.model.player.moveLeft()
            if self.key_handler[key.UP] or self.key_handler[key.W]:
                self.model.player.moveForward()
            if self.key_handler[key.DOWN] or self.key_handler[key.S]:
                self.model.player.moveBackward()
            if self.key_handler[key.SPACE] or self.key_handler[key.TAB]:
                self.model.player.toggle_weapons(self.model.time)
            if self.key_handler[key.LSHIFT]:
                self.model.player.vt = 300
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
                itemClicked = False
                xDistance = self.model.player.x - x
                yDistance = self.model.player.y - y
                distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)

                if distance < 100:
                    for item in self.model.room.roomItems:
                        if isinstance(item, InteractableItem):
                            item.on_click(x, y)
                            if item.open:
                                self.model.contextMenu.item = item
                                self.model.contextMenu.construct()
                                itemClicked = True

                if distance < 500:
                    for buttonTile in self.model.contextMenu.tiles:
                        action = buttonTile.on_click(x, y)
                        self.model.contextMenu.item.perform_action(
                            self.model.player, action)

                if not itemClicked:
                    self.model.contextMenu.deconstruct()

                self.model.notificationSystem.on_click(x, y)

            if button == mouse.RIGHT:
                self.model.player.weapon.fire_projectile(
                    self.model.player, self.model.time)

    def update(self):
        self.checkKeyPress()
        self.checkMouseMove()
        self.checkMouseClick()
        self.model.player.set_orientation(self.mouseX, self.mouseY)
