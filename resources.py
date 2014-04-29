import pyglet
from pyglet.image import ImageGrid, TextureGrid


def center_image(image):
    """Sets an image's anchor point to its center"""
    image.anchor_x = image.width / 2
    image.anchor_y = image.height / 2

# tells pygame where to find our resources
pyglet.resource.path = ['resources']
pyglet.resource.reindex()


treeImage = pyglet.resource.texture("tree.png")
stumpImage = pyglet.resource.texture("TreeStump.png")

crewImageboy = pyglet.resource.texture("boy.png")
crewImagegirl = pyglet.resource.texture("girl.png")
crewImages = [crewImageboy, crewImagegirl]

deathChicken1Image = pyglet.resource.texture("DeathChicken1.png")
deathChicken2Image = pyglet.resource.texture("DeathChicken2.png")
deathChickenImages = [deathChicken1Image, deathChicken2Image]

ground = pyglet.resource.texture("ground2.jpg")
blackout = pyglet.resource.texture("blackground.png")

bulletImage = pyglet.resource.texture("bullet.png")
arrowImage = pyglet.resource.texture("Arrow.png")

playerSheet = pyglet.resource.texture("player_sheet.png")
playerGrid = ImageGrid(playerSheet, 4, 4, item_width=50, item_height=50)
playerGrid = TextureGrid(playerGrid)

silver_tile_small = pyglet.resource.texture("inventory_button.png")
silver_tile_large = pyglet.resource.texture("description_tile.png")

campfireImage = pyglet.resource.texture("campfire.png")
woodImage = pyglet.resource.texture("log.png")
berryImage = pyglet.resource.texture("log.png")
meatImage = pyglet.resource.texture("log.png")
boneImage = pyglet.resource.texture("log.png")

pistolImage1 = pyglet.resource.texture("gun copy.PNG")
rifleImage1 = pyglet.resource.texture("Ak-47.png")
bowImage1 = pyglet.resource.texture("Longbow copy.PNG")

pistolImages = [pistolImage1]
rifleImages = [rifleImage1]
bowImages = [bowImage1]

maleNames = ["Austin", "Philip", "Paul", "Nick",
             "Reginald", "Titus", "Charley", "Churly", "August"]
femaleNames = ["Hannah", "Shrindoozle",
               "Bonnie", "Meg", "Claire", "Rosy", "Sam"]

healthAmount = pyglet.resource.texture("healthamount.png")
healthBackground = pyglet.resource.texture("healthbackground.png")
