from Item import Item

class Health_Bar(Item): #This is the class that defines the Health Bar and how it works for the Actor classs
	
	def __init__(self, *args, **kwargs):
		super(Health_Bar, self).__init__(*args, **kwargs)

	def update(self, health):
		self.health = health

		if health <= 100 and health >90:
			self.animFrame[:9]
		elif health > 80:
			self.animFrame[:8]
		elif health > 70:
			self.animFrame[:7]
		elif health > 60:
			self.animFrame[:6]
		elif health > 50:
			self.animFrame[:5]
		elif health > 40:
			self.animFrame[:4]
		elif health > 30:
			self.animFrame[:3]
		elif health > 20:
			self.animFrame[:2]
		elif health > 10:
			self.animFrame[:1]
		elif health > 0:
			self.animFrame[0]
		else:
			self.animFrame[10]