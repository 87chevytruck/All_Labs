""" Ricky Smith, Lab5B:  Your First Python Class, 13 Sep 2018 """

# create Invisible Hero Class
class Invisible_Hero:
    def __init__(self, heroName, realName, superPower, heroColor, 
                 birthPlanet):
        self.heroName = heroName
        self.realName = realName
        self.superPower = superPower
        self.heroColor = heroColor
        self.birthPlanet = birthPlanet

    def printDetails(self):
        print("Hero's Name:  {}").format(self.heroName)
        print("Hero's Real Name:  {}").format(self.realName)
        print("Hero's Super Power:  {}").format(self.superPower)
        print("Hero's Costume Color:  {}").format(self.heroColor)
        print("Hero's Birth Place:  {}").format(self.birthPlanet)

# set hero 1 and 2's information using the class Invisible_Hero
hero1 = Invisible_Hero("The Invisible Hulk", "Bruce", "Super Strength and "
                       "Invisibility", "N/A (he's sort of invisible)", 
                       "Blackhole X-43")
hero2 = Invisible_Hero("The Invisible Lady", "Sammantha", "Telepathic, "
                       "Telekinetic and Invisibility", "N/A (she's sort of "
                       "invisible)", "Lunar S-7")

# display hero 1 and 2's info
print("= = = = = = = Hero 1 = = = = = = =")
hero1.printDetails()
print("\n= = = = = = = Hero 2 = = = = = = =")
hero2.printDetails()

