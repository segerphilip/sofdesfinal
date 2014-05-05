from Tiles import *
from collections import OrderedDict

class Weapon_Gui(object):

    def __init__(self, weapons, x=1400, y=775):

        d = OrderedDict()
        for weapon in weapons:
            d[weapon] = True

        self.weapons = list(d.keys())
        self.lastWeapons = weapons
        self.spacing = 100
        self.x = x
        self.y = y

        self.create_weapon_boxes()
        self.create_weapon_tiles()

    def create_weapon_boxes(self):
        print "creating Boxes"
        self.weaponBoxes = []
        i = 0

        for weapon in self.weapons:
            self.weaponBoxes.append(WeaponBox(weapon, x=self.x - 50 +self.spacing*i, y=self.y))
            i+=1

        for x in xrange(len(self.weapons), 4):
            self.weaponBoxes.append(WeaponBox(None, x=self.x - 50 +self.spacing*i, y=self.y))
            i+=1

    def create_weapon_tiles(self):
        self.weaponTiles = []

        for weapon in self.weapons:
            self.weaponTiles.append(WeaponTile(weapon.generate_text(),texture=resources.weaponTileImage, x=self.x+50, y=self.y-125))

    def on_click(self, model, x, y):
        for weapon in self.weapons:
            if weapon.on_click(model, x, y):
                self.weaponTiles[self.weapons.index(weapon)].viewable = True
            else:
                self.weaponTiles[self.weapons.index(weapon)].viewable = False

    def render(self):
        for weaponBox in self.weaponBoxes:
            weaponBox.render()

        for weaponTile in self.weaponTiles:
            if weaponTile.viewable:
                weaponTile.render()

    def update(self, player):
        if self.weapons != self.lastWeapons:
            print "IN!"
            self.weapons = player.weapons

            d = OrderedDict()
            for weapon in player.weapons:
                d[weapon] = True

            self.weapons = list(d.keys())
            self.create_weapon_boxes()
            self.create_weapon_tiles()

        for weapon in self.weapons:
            if weapon == player.weapon:
                self.weaponBoxes[self.weapons.index(weapon)].background.rgba=(0,100,0,1)
            else:
                self.weaponBoxes[self.weapons.index(weapon)].background.rgba=(1,1,1,1)
