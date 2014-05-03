# View
import resources
import pyglet
from rabbyt import Sprite, lerp, chain, set_time


class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.blackout = Sprite(resources.blackout, x=800, y=450)
        self.blackout.alpha = .1

    def sleep(self):
        self.blackout.alpha = chain(
            lerp(end=1, dt=3),
            lerp(end=0, dt=3))

        for crew in self.model.crew:
            crew.update(100)
        self.model.player.sleep = False

    def sunRise(self):
        self.model.day = False
        self.model.new_night()
        self.blackout.alpha = lerp(end=0, dt=self.model.dayTime)

    def sunSet(self):
        self.model.day = True
        self.model.new_day()
        self.blackout.alpha = lerp(end=1, dt=self.model.dayTime)

    def endscreen(self):
        self.window.clear()
        #there's probably an easier way to draw 'end'
        endLabel = pyglet.text.Label('Your adventure stops here...',
            font_name='Press Start 2P',
            font_size=36,
            anchor_x='center' ,anchor_y='center',
            x=800 ,y=450, color=(81,143,90, 255))
        endLabel.draw()

    def update(self):
        set_time(self.model.time)

        self.window.clear()

        if self.blackout.alpha >= .99:
            self.model.return_crew()

        if self.model.player.sleep:
            self.sleep()
        else:
            if self.blackout.alpha >= 1:
                self.sunRise()
            elif self.blackout.alpha <= 0:
                self.sunSet()

            self.model.room.background.render()
            for weapon in self.model.player.weapons:
                for projectile in weapon.projectiles:
                    projectile.render()

            for sprite in self.model.spritesOnScreen:
                if sprite.viewable:
                    sprite.render()
                    
            for actor in self.model.actorsOnScreen:
                for projectile in actor.projectiles:
                    projectile.render()

            if self.model.contextMenu:
                self.model.contextMenu.render()

            self.blackout.render()

            self.model.inventoryButton.render()
            for label in self.model.inventoryButton.labels:
                label.draw()

            self.model.Health_Bar.render()

            self.model.notificationSystem.render()
            self.model.DayCounter.render()

            if self.model.inventoryMenu:
                #if self.model.inventoryMenu.viewable:
                self.model.inventoryMenu.render()

            self.blackout.render()
