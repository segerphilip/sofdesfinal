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
#itemImage = pyglet.resource.texture("TreeStump.png")

crewImageboy = pyglet.resource.texture("boy.png")
crewImagegirl = pyglet.resource.texture("girl.png")
crewImagebaby = pyglet.resource.texture("baby.png")
crewImagedad = pyglet.resource.texture("dad.png")
crewImages = [crewImagedad, crewImageboy, crewImagegirl, crewImagebaby]

enemyImage = pyglet.resource.texture("enemy.png")

ground = pyglet.resource.texture("ground.jpg")
blackout = pyglet.resource.texture("blackground.png")

bulletImage = pyglet.resource.texture("bullet.png")

playerSheet = pyglet.resource.texture("player_sheet.jpg")
playerGrid = ImageGrid(playerSheet, 4, 4, item_width=50, item_height=50)
playerGrid = TextureGrid(playerGrid)
