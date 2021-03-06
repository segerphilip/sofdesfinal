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

rockImage1 = pyglet.resource.texture("Rock.png")
rockImage2 = pyglet.resource.texture("Rock.png")
rockImages = [rockImage1, rockImage2]
metalImage = pyglet.resource.texture("MetalImage.png")

crewImageboy = pyglet.resource.texture("boy.png")
crewImagegirl = pyglet.resource.texture("girl.png")
crewImages = [crewImageboy, crewImagegirl]

deathChicken1Image = pyglet.resource.texture("DeathChicken1.png")
deathChicken2Image = pyglet.resource.texture("DeathChicken2.png")
deathChickenImages = [deathChicken1Image, deathChicken2Image]

deadChickenImage1 = pyglet.resource.texture("DeathChicken2Dead2.png")
deadChickenImage2 = pyglet.resource.texture("DeathChickenDead.png")
deadChickenImages = [deadChickenImage1,deadChickenImage2]

deathJelly1Image = pyglet.resource.texture("Jellyfish13 copy.PNG")
deathJelly2Image = pyglet.resource.texture("Jellyfish12.png")
deathJellyImages = [deathJelly1Image, deathJelly2Image]
deadJellyImage = pyglet.resource.texture("deadJelly.png")
deathJellyProjectileImage = pyglet.resource.texture("blotch.PNG")

grass1 = pyglet.resource.texture("NewBackground1.png")
grass2 = pyglet.resource.texture("NewBackground2.png")

grasses = [grass1, grass2]

blackout = pyglet.resource.texture("blackground.png")

bulletImage = pyglet.resource.texture("bullet.png")
arrowImage = pyglet.resource.texture("Arrow.png")

playerSheet = pyglet.resource.texture("player_sheet.png")
playerGrid = ImageGrid(playerSheet, 4, 4, item_width=50, item_height=50)
playerGrid = TextureGrid(playerGrid)

silver_tile_small = pyglet.resource.texture("inventory_button.png")
silver_tile_large = pyglet.resource.texture("description_tile.png")

inventoryButtonImage = pyglet.resource.texture("InventoryButton.png")
notificationBoxTexture = pyglet.resource.texture("HUDNotification.png")
dayCounterTexture = pyglet.resource.texture("InventoryBox.png")

black_tile_large = pyglet.resource.texture("InventoryBox.png")
grey_background = pyglet.resource.texture("grey_background.png")

campfireImage = pyglet.resource.texture("CampFire.png")
woodImage = pyglet.resource.texture("log.png")
berryImage = pyglet.resource.texture("berries copy.PNG")
meatImage = pyglet.resource.texture("Meat.png")
boneImage = pyglet.resource.texture("bones.png")

weaponBoxImage = pyglet.resource.texture("weaponBox.png")
weaponTileImage = pyglet.resource.texture("weaponTile.png")

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

pyglet.font.add_file('resources/PressStart2P.ttf')