# All Classes for Game
from Items import *
from Tiles import *

class Inventory(object):
    
    def __init__(self, trigger, items):
        self.entries = []
        self.trigger = trigger
        self.items = items
        self.texture = resources.black_tile_large
        #self.viewable = False

    def construct(self):
        self.entries = []

        image_texture = resources.treeImage
        start_x = self.trigger.x - (self.trigger.texture.width/2) + (image_texture.width/2)
        start_y = self.trigger.y - (self.trigger.texture.height/2) - self.texture.height/2 - 5
        
        for i in range(len(self.items)):
            next_x = start_x
            next_y = start_y - i * (self.texture.height + 5)
            self.entries.append(InventoryEntry(item=self.items[i], x=next_x, y=next_y))
        #self.viewable = True

    def deconstruct(self): # not necessary?
        self.trigger = None
        self.entries = []

    def render(self):
        #self.background.render()
        for entry in self.entries:
            entry.render()

class InventoryEntry(object):

    def __init__(self, item, x, y, *args, **kwargs):
        self.item = item
        self.x = x
        self.y = y

        self.image = InventoryImage(item=self.item,x=self.x, y=self.y)
        self.description = [self.item.description, self.item.inventory_count, self.item.weight]

        self.tile_texture = resources.black_tile_large
        self.tile_x = self.x + self.image.texture.width + self.tile_texture.width/2
        self.tile_y = self.y
        self.tile = InventoryTile(text=self.description, texture=self.tile_texture, x=self.tile_x, y=self.tile_y)

    def render(self):
        #self.background.render()
        self.image.render()
        self.tile.render()
        for label in self.tile.labels:
            label.draw()

class InventoryImage(rabbyt.sprites.Sprite):

    def __init__(self, item, *args, **kwargs):
        super(InventoryImage, self).__init__(*args, **kwargs)
        self.item = item
        self.texture = self.item.texture
        self.clicked = False

    def update(self, dt):
        pass

    def on_click(self, model, x, y):

        if (x > (self.x - self.bounding_radius) and x < (self.x + self.bounding_radius)):
            if (y > (self.y - self.bounding_radius) and y < (self.y + self.bounding_radius)):
                self.clicked = not self.clicked
                
                if self.clicked:
                    tile_texture = resources.black_tile_large
                    padding = 5

                    menu_x = self.x + 2 * self.texture.width + tile_texture.width + padding
                    menu_y = self.y

                    model.contextMenu = ContextMenu(model=model, trigger=self.item, options=self.item.actions, x=menu_x, y=menu_y)
                    model.contextMenu.invMenu = True
                    model.contextMenu.construct()
                else:
                    #self.viewable = False
                    model.contextMenu.deconstruct()
            else:
               #self.viewable = False
               self.clicked = False
        else:
           #self.viewable = False
           self.clicked = False

class InventoryBackground(rabbyt.sprites.Sprite): # in progress
    def __init__(self, x, y, *args, **kwargs):
        super(InventoryBackground, self).__init__(*args, **kwargs)
        self.x = x
        self.y = y
        self.texture = resources.grey_background

    def update(self,dt):
        pass

class InventoryButton(Button):
    def __init__(self,text,texture,*args,**kwargs):
        super(InventoryButton,self).__init__(text=text,texture=texture,*args,**kwargs)

    def on_click(self,model, x,y):

        if (x > (self.x - (self.texture.width / 2)) and x < (self.x + (self.texture.width / 2))):
            if (y > (self.y - (self.texture.height / 2)) and y < (self.y + (self.texture.height / 2))):
                self.clicked = not self.clicked
                if self.clicked:
                    model.inventoryMenu = Inventory(trigger=self,items=model.player.inventory)
                    model.inventoryMenu.construct()

                else:
                    model.inventoryMenu.deconstruct()
                    self.clicked = False