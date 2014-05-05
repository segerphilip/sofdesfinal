from pyglet.window import key
from pyglet.window import mouse
from Items import *
from Menus import *
from Inventory import *
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

    def startScreenControls(self):
        if self.key_handler:
            self.model.starting = False
        self.checkMouseClick()

    def checkMouseMove(self):
        @self.model.window.event
        def on_mouse_motion(x, y, dx, dy):
            self.mouseX = x
            self.mouseY = y

    def checkMouseClick(self):

        @self.model.window.event
        def on_mouse_press(x, y, button, modifiers):
            self.model.starting = False
            if button == mouse.LEFT:
                itemClicked = False
                xDistance = self.model.player.x - x
                yDistance = self.model.player.y - y
                distance = ((xDistance) ** 2 + (yDistance) ** 2) ** (.5)

                if self.model.contextMenu:
                    # clicking an option in a context menu -> trigger character
                    # action
                    if not self.model.contextMenu.invMenu:
                        if distance < 500:
                            for tile in self.model.contextMenu.tiles:
                                tile.on_click(
                                    self.model.contextMenu, self.model.player, x, y)
                        # if no item is clicked, close the context menu
                            if not itemClicked:
                                self.model.contextMenu.deconstruct()
                    else:
                        for tile in self.model.contextMenu.tiles:
                            tile.on_click(
                                self.model.contextMenu, self.model.player, x, y)
                        if not itemClicked:
                            self.model.contextMenu.deconstruct()

                # clicking interactable items -> context menu
                if distance < 100:
                    for item in self.model.room.roomItems:
                        # if clicked, opens item's context menu of actions
                        if item.interactable:
                            item.on_click(model=self.model, x=x, y=y)
                            if item.clicked:
                                # keeps track of whether an item is clicked
                                itemClicked = True

                # clicking the inventory button -> inventory menu
                self.model.inventoryButton.on_click(
                    model=self.model, x=x, y=y)

                if self.model.inventoryMenu:
                    # clicking sprites in the inventory menu
                    if self.model.inventoryButton.clicked:
                        self.model.inventoryMenu.viewable = True
                        for entry in self.model.inventoryMenu.entries:
                            entry.image.on_click(model=self.model, x=x, y=y)
                    else:
                        self.model.inventoryMenu.viewable = False

                self.model.notificationSystem.on_click(x, y)
                self.model.WeaponGui.on_click(self.model, x, y)
            if button == mouse.RIGHT:
                self.model.player.weapon.fire_projectile(
                    self.model.player, self.model.time)

    def update(self):
        self.checkKeyPress()
        self.checkMouseMove()
        self.checkMouseClick()
        self.model.player.set_orientation(self.mouseX, self.mouseY)
