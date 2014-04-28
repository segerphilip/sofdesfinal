# View
from Health_Bar import Health_Bar
import resources
from rabbyt import Sprite, lerp, chain, set_time


class View():

    def __init__(self, model):
        self.model = model
        self.window = self.model.window
        self.blackout = Sprite(resources.blackout, x=800, y=450)
        self.blackout.alpha = 0

    def sleep(self):
        self.blackout.alpha = chain(
            lerp(end=1, dt=3),
            lerp(end=.01, dt=3))

        self.model.player.sleep = False

    def sunRise(self):
        self.model.day = False
        self.model.new_night()
        self.blackout.alpha = lerp(end=0, dt=self.model.dayTime)

    def sunSet(self):
        self.model.day = True
        self.model.new_day()
        self.blackout.alpha = lerp(end=1, dt=self.model.dayTime)

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

            self.model.inventoryButton.render()
            self.model.inventoryButton.label.draw()

            # self.model.HealthBar.render()

            self.model.contextMenu.render()
            self.blackout.render()
