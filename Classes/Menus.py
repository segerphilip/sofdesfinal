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
        self.inv_texture = resources.black_tile_large
        self.invMenu = False
        
        self.start_x = x
        self.start_y = y
        self.menu_height = len(self.options) * self.texture.height

        # context menu edges
        self.left_x = self.start_x - self.texture.width/2
        self.right_x = self.start_x + self.texture.width/2
        self.top_y = self.start_y + self.menu_height - self.texture.height/2
        self.bottom_y = self.start_y - self.texture.height/2
        self.padding = 5

    def construct(self):
        self.tiles = []

        # inventory context menu
        if self.invMenu:
            self.start_x = self.x
            self.start_y = self.y + self.inv_texture.height/2 - self.texture.height/2
            
            self.update_boundaries(self.start_x, self.start_y)
            self.check_collisions()
            
            for i in range(len(self.options)):
                next_x = self.start_x
                next_y = self.start_y - i * self.texture.height
                self.tiles.append(Button(text=self.options[i],texture=self.texture,x=next_x, y=next_y))

        # item context menu start
        else:
            self.start_x = self.x + 2 * self.trigger.bounding_radius
            self.start_y = self.y + 2 * self.trigger.bounding_radius

            self.update_boundaries(self.start_x, self.start_y)
            self.check_collisions()

            for i in range(len(self.options)):
                next_x = self.start_x
                next_y = self.start_y + i * self.texture.height
                self.tiles.append(Button(text=self.options[i],texture=self.texture,x=next_x, y=next_y))
    
    def update_boundaries(self, start_x, start_y):
        self.left_x = start_x - self.texture.width/2
        self.right_x = start_x + self.texture.width/2
        self.top_y = start_y + self.menu_height - self.texture.height/2
        self.bottom_y = start_y - self.texture.height/2

    def check_collisions(self):
        self.avoid_inv_button()
        self.avoid_weapon_menu()
        self.avoid_notification()
        self.avoid_screen_edge()

    def avoid_screen_edge(self):
        screen_height = self.model.window.screen.height
        screen_width = self.model.window.screen.width

        screen_y_offset = self.top_y - screen_height
        screen_x_offset = self.right_x - screen_width
        
        if self.top_y > screen_height:
            self.start_y -= (screen_y_offset + self.padding)
        if self.right_x > screen_width:
            self.start_x -= (screen_x_offset + self.padding)

        self.update_boundaries(self.start_x, self.start_y)

    def avoid_inv_button(self):
        button_bottom = self.model.inventoryButton.y - self.model.inventoryButton.texture.height/2
        button_right = self.model.inventoryButton.x + self.model.inventoryButton.texture.width/2

        if (self.top_y > button_bottom) and (self.left_x < button_right):
            self.start_x = self.trigger.x + 2 * self.trigger.bounding_radius
            self.start_y = self.trigger.y - 2 * self.trigger.bounding_radius

        self.update_boundaries(self.start_x, self.start_y)

    def avoid_weapon_menu(self):
        weapon_bottom = self.model.WeaponGui.weaponBoxes[0].y - self.model.WeaponGui.weaponBoxes[0].texture.height/2
        weapon_left = self.model.WeaponGui.weaponBoxes[0].x - self.model.WeaponGui.weaponBoxes[0].texture.width/2

        weapon_y_offset = self.top_y - weapon_bottom
        weapon_x_offset = self.right_x - weapon_left

        if (self.top_y > weapon_bottom) and (self.right_x > weapon_left):
            self.start_y -= (weapon_y_offset + self.padding)

        self.update_boundaries(self.start_x, self.start_y)

    def avoid_notification(self):
        notif_top = self.model.notificationSystem.y + self.model.notificationSystem.texture.height/2
        notif_left = self.model.notificationSystem.x - self.model.notificationSystem.texture.width/2

        if (self.bottom_y < notif_top) and (self.right_x > notif_left):
            self.start_x = self.trigger.x - 2 * self.trigger.bounding_radius
            self.start_y = self.trigger.y + 2 * self.trigger.bounding_radius

        self.update_boundaries(self.start_x, self.start_y)

class ChoiceMenu(Menu):
    def __init__(self, model, trigger, options, x, y):
        super(ChoiceMenu, self).__init__(model=model, trigger=trigger,options=options, x=x, y=y)