import pyglet


def center_image(image):
    """Sets an image's anchor point to its center"""
    image.anchor_x = image.width / 2
    image.anchor_y = image.height / 2

# tells pygame where to find our resources
pyglet.resource.path = ['resources']
pyglet.resource.reindex()

playerImage = pyglet.resource.image("player.jpg")
crewImage = pyglet.resource.image("player.jpg")
# bullet_image = pyglet.resource.image("bullet.png")
# asteroid_image = pyglet.resource.image("asteroid.png")
