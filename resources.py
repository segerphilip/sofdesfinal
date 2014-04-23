import pyglet
from pyglet.image import ImageGrid, TextureGrid


def center_image(image):
    """Sets an image's anchor point to its center"""
    image.anchor_x = image.width / 2
    image.anchor_y = image.height / 2

# tells pygame where to find our resources
pyglet.resource.path = ['resources']
pyglet.resource.reindex()


itemImage = pyglet.resource.texture("tree.png")

crewImageboy = pyglet.resource.texture("boy.png")
crewImagegirl = pyglet.resource.texture("girl.png")
crewImages = [crewImageboy, crewImagegirl]

enemyImage = pyglet.resource.texture("enemy.png")

ground = pyglet.resource.texture("Grass.png")
blackout = pyglet.resource.texture("blackground.png")

bulletImage = pyglet.resource.texture("bullet.png")
arrowImage = pyglet.resource.texture("Arrow.png")

playerSheet = pyglet.resource.texture("player_sheet.png")
playerGrid = ImageGrid(playerSheet, 4, 4, item_width=50, item_height=50)
playerGrid = TextureGrid(playerGrid)

silver_tile_small = pyglet.resource.texture("inventory_button.png")
silver_tile_large = pyglet.resource.texture("description_tile.png")
campfireImage = pyglet.resource.texture("campfire.png")

maleNames = ["Austin", "Philip", "Paul", "Nick",
             "Reginald", "Titus", "Charley", "Churly", "August"]
femaleNames = ["Hannah", "Shrindoozle",
               "Bonnie", "Meg", "Claire", "Rosy", "Sam"]

healthAmount = pyglet.resource.texture("healthamount.png")
healthBackground = pyglet.resource.texture("healthbackground.png")
