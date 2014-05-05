# All Classes for Game
from Items import *
from Tiles import *
from collections import OrderedDict

class Inventory(object):
    
    def __init__(self, trigger, items):
        self.entries = []
        self.trigger = trigger
        self.items = items
        self.texture = resources.black_tile_large
        self.viewable = False

        self.image_texture_length = 50
        self.start_x = self.trigger.x - (self.trigger.texture.width/2) + (self.image_texture_length/2)
        self.start_y = self.trigger.y - (self.trigger.texture.height/2) - self.texture.height/2 - 5

    def construct(self):
        self.entries = []
        self.lastEntries = []
  
        for i in range(len(self.items)):
            next_x = self.start_x
            next_y = self.start_y - i * (self.texture.height + 5)
            self.entries.append(InventoryEntry(item=self.items[i], x=next_x, y=next_y))

    def update(self, player):
        newItems = []
        playerInventoryItems = [item for item in player.inventory]
        entryItemTypes = [type(item) for item in [entry.item for entry in self.entries]]
        
        for item in playerInventoryItems:
            if type(item) not in entryItemTypes:
                newItems.append(item)

        for item in newItems:
            self.entries.append(InventoryEntry(item=item, x=self.start_x, y=self.start_y-len(self.entries)*(self.texture.height + 5)))

        for entry in self.lastEntries:
            if entry.item not in playerInventoryItems:
                self.construct()

        for entry in self.entries:
            entry.update()

        d = OrderedDict()
        for entry in self.entries:
            d[entry] = True

        self.lastEntries = d.keys()

    def render(self):
        for entry in self.entries:
            entry.render()

class InventoryEntry(object):

    def __init__(self, item, x, y, *args, **kwargs):
        self.item = item
        self.x = x
        self.y = y

        self.image = InventoryImage(item=self.item,x=self.x, y=self.y)
        self.description = [self.item.description, self.item.inventory_count, self.item.weight*self.item.inventory_count]

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

    def update(self):
        self.tile.update([self.item.description, self.item.inventory_count, self.item.weight*self.item.inventory_count])
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
                    model.contextMenu.deconstruct()
            else:
               self.clicked = False
        else:
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

        self.labels[0].font_name = "Press Start 2P"
        self.labels[0].color = (81, 143, 90, 255)
        self.labels[0].font_size = 7

    def on_click(self,model, x,y):

        if (x > (self.x - (self.texture.width / 2)) and x < (self.x + (self.texture.width / 2))):
            if (y > (self.y - (self.texture.height / 2)) and y < (self.y + (self.texture.height / 2))):
                self.clicked = not self.clicked
                if self.clicked:
                    if not model.inventoryMenu:
                        model.inventoryMenu = Inventory(trigger=self,items=model.player.inventory)
                        model.inventoryMenu.construct()
                    else:
                        model.inventoryMenu.update(model.player)
                else:
                    self.clicked = False