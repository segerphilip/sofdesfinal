from Actor import Actor
from math import atan, cos, sin

class Enemy(Actor):  # This defines the Enemy Class

    def __init__(self, *args, **kwargs):
        super(Enemy, self).__init__(*args, **kwargs)
        self.vt=90

    def set_orientation(self, theta):
    	pass

    def check_player_distance(self,playerX, playerY):
    	if ((playerX-self.x)**2+(playerY-self.y)**2)**(.5) < 100:
    		theta=atan((playerY-self.y)/(playerX-self.x))
    		self.vx= self.vt*cos(theta)
    		self.vy= self.vt*sin(theta)
    		print theta
    	

    def update(self, dt, playerX, playerY):
    	self.check_player_distance(playerX, playerY)
 
        self.x += self.vx * dt
        self.y += self.vy * dt

        self.vx = 0
        self.vy = 0
