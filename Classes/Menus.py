from Tiles import *
import resources
import rabbyt

class Menu(object):

    def __init__(self, model, trigger, options, x, y):
        self.tiles = []
        self.trigger = trigger
        self.options = options
        self.texture = resources.silver_tile_large
        self.model = model

        self.x = x
        self.y = y

    def construct(self):
        self.tiles = []
        start_x = self.x + \
            2 * self.trigger.bounding_radius
        start_y = self.y + \
            2 * self.trigger.bounding_radius
        for i in range(len(self.options)):
            next_x = start_x
            next_y = start_y + i * self.texture.height
            self.tiles.append(Tile(text=self.options[i],texture=self.texture,x=next_x, y=next_y))

    def deconstruct(self):
        self.trigger = None
        self.tiles = []

    def render(self):
        for tile in self.tiles:
            tile.render()
            for label in tile.labels:
                label.draw()

class ContextMenu(Menu):

    def __init__(self, model, trigger, options, x, y):
        super(ContextMenu, self).__init__(model=model, trigger=trigger,options=options, x=x, y=y)
        self.texture = resources.silver_tile_small
        self.invMenu = False

    def construct(self):
        self.tiles = []

        if self.invMenu:
            start_x = self.x
            start_y = self.y + resources.black_tile_large.texture.height/2 - self.texture.height/2
            for i in range(len(self.options)):
                next_x = start_x
                next_y = start_y - i * self.texture.height
                self.tiles.append(Button(text=self.options[i],texture=self.texture,x=next_x, y=next_y))
        
        else:
            start_x = self.x + \
                2 * self.trigger.bounding_radius
            start_y = self.y + \
                2 * self.trigger.bounding_radius
            for i in range(len(self.options)):
                next_x = start_x
                next_y = start_y + i * self.texture.height
                self.tiles.append(Button(text=self.options[i],texture=self.texture,x=next_x, y=next_y))

        new_coordinates = self.check_collisions(x=start_x, y=start_y)

    def check_collisions(self, x, y):

        if not self.tiles == []:
            new_x = x
            new_y = y

            left_x = x - self.tiles[0].texture.width/2
            right_x = x + self.tiles[0].texture.width/2
            top_y = y + self.tiles[0].texture.height/2
            bottom_y = self.tiles[-1].y - self.tiles[-1].texture.height/2

            # collisions with the edges of the screen
            screen_height = self.model.window.screen.height
            screen_width = self.model.window.screen.width
            
            screen_y_adjust = self.tiles[0].texture.height/2 + self.trigger.texture.height
            screen_x_adjust = self.tiles[0].texture.width/2 + self.trigger.texture.width

            if top_y > screen_height:
                new_y = screen_height - screen_y_adjust
            elif bottom_y < 0:
                new_y = self.tiles[0].texture.height*len(self.tiles) + screen_y_adjust
            if right_x > screen_width:
                new_x = screen_width - screen_x_adjust
            elif left_x < 0:
                new_x = screen_x_adjust

            # collisions with inventory button
            button_top = self.model.inventoryButton.y + self.model.inventoryButton.texture.height/2
            button_bottom = self.model.inventoryButton.y - self.model.inventoryButton.texture.height/2

            if (top_y > button_bottom and top_y < button_top) or (bottom_y < button_top and bottom_y > button_bottom):
                new_x += 10
                new_y -= self.trigger.texture.height + self.tiles[0].texture.height*len(self.tiles)

            # collisions with the health bar!

            # replacing the x and y coordinates of the menu
            self.tiles = []
            if self.invMenu:
                for i in range(len(self.options)):
                    next_x = new_x
                    next_y = new_y - i * self.texture.height
                    self.tiles.append(Button(self.options[i],texture=self.texture,x=next_x,y=next_y))
            else:
                for i in range(len(self.options)):
                    next_x = new_x
                    next_y = new_y + i * self.texture.height
                    self.tiles.append(Button(self.options[i],texture=self.texture,x=next_x,y=next_y))