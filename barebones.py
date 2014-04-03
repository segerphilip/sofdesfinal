#All our Imports
import pyglet
from pyglet.window import key
import resources
import rabbyt
import ABCMeta, abstractmethod

#Model
class Model(): #sets window and player

    def __init__(self, window):
        self.window = window
        self.player = Character(
            texture=resources.player_image, x=300, y=400)
        self.sprites = [self.player]
        
    def
    
#View
class View():
	def __init__(self):
      pass
#Controller
class Controller():

    def __init__(self, model):
        self.model = model
        self.key_handler = key.KeyStateHandler()
        self.model.window.push_handlers(self.key_handler)
        self.event_handlers = [self, self.key_handler]

    def checkKeyPress(self): #checking the key press and tells the player to move right
        if self.key_handler:
            if self.key_handler[key.LEFT]:
                self.model.player.moveLeft()
                # print "Key Pressed!"
            if self.key_handler[key.RIGHT]:
                self.model.player.moveRight()
                # print "Key Pressed!"
            if self.key_handler[key.UP]:
                self.model.player.moveForward()
                # print "Key Pressed!"
            if self.key_handler[key.DOWN]:
                self.model.player.moveBackward()
                # print "Key Pressed!"
                
    def checkMouseMove(self):
      pass
#All Classes for Game
class Item(rabbyt.sprites.Sprite):
 
	def __init__(self, *args, **kwargs):
    	super(Item, self).__init__(*args, **kwargs)
       pass
    metaClass = ABCMeta
    
    @abstractmethod
    def is_clicked(self)
    	pass
    
class Actor(Item):
    def __init__(self, *args, **kwargs):
        super(Actor, self).__init__(*args, **kwargs)

        self.vx = 0
        self.vy = 0
        
        self.ax = 0
        self.ay = 0
        
        self.theta = 0
        
        self.health = 100
      
    metaClass = ABCMeta
    
    @abstractmethod
    def set_orientation():
    	pass
      
    @abstractmethod
    def update()
    	pass
    
class Character(Actor): # character plus attributes, this includes motion and orientation
	def __init__(self, *args, **kwargs):
    	super(Character, self).__init__(*args, **kwargs)
        
    def moveForward(self):
        self.vy = 40

    def moveBackward(self):
        self.vy = -40

    def moveRight(self):
        self.vx = 40

    def moveLeft(self):
        self.vx = -40

    def stop(self):
        self.vx = 0
        self.vy = 0

    def set_orientation(self, theta):
    	pass
      
    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt

        self.vx = 0
        self.vy = 0
        
    
class Enemy(Actor): #This defines the Enemy Class 
	def __init__(self, *args, **kwargs):
    	super(Enemy, self).__init__(*args, **kwargs)
    
	def set_orientation(self, theta):
    	pass
    def update(self, dt):
        self.x += self.vx * dt
        self.y += self.vy * dt
        
        self.vx = 0
        self.vy = 0
        
 
class Room():#generatesgame rooms, where players will be transported depending on decisions 
  def __init__(self):
    pass
  def generate_room():
    pass
  def render_room():
    pass
  
class Base(Room):#generates the main base, standard for every game. Similar to Room
  def generate_room():
    pass
  
class Health_Bar(): #This is the class that defines the Health Bar and how it works for the Actor classs
	def __init__(self, Character.health):
      self.health = Character.health
    def display_health(health):
      pass
    
class Inventory(): #IN DEVELOPMENT sets inventory for character class
  def __init__(self, Character.inventory):
    self.inventory = Character.inventory
  def display_inventory(self.inventory):
    pass
    #inventory = ""
    #for i in self.inventory:
    #  inventory += i + "\n"    #  inventory += i + "\n"

    #label = pyglet.text.Label(inventory, font_name = 'Calibri', font_size = 12, x = game_window.width/2, y = game_window.height/2,anchor_x = 'center',anchor_y = 'center')

#Game Objects (not in model)    
game_window = pyglet.window.Window(800, 600, vsync=False)

m = model(game_window)
c = controller(m)
v = view(m)

#Main Game run
@game_window.event#controlling code
def on_draw():
    v.upate()

def update(dt):#updates all the things
    c.checkKeyPress()
    m.sprite.update(dt)

if __name__ == "__main__":
    pyglet.clock.schedule_interval(update, 1 / 120.0)

    pyglet.app.run()