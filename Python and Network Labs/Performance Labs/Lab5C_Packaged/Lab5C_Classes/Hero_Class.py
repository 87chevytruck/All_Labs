""" Ricky Smith, Lab5C:  Update Hero Class, 14 Sep 2018 
            - Hero Class -

"""

# import parent class
from Person_Class import Person

# create Hero Class
class Hero(Person):
    def __init__(self, heroName, heroColor, birthPlanet):
        self.heroName = heroName
        self.heroColor = heroColor
        self.birthPlanet = birthPlanet

    # prints all stats of the Hero, including those from 
    ## Parent Class Person
    def printDetails(self):
        print("Hero's Name:  {}").format(self.heroName)
        print("Hero's Real Name:  {} {}").format(self.getFname(), 
                                                 self.getLname())
        print("Hero's Age:  {}").format(self.getAge())
        print("Hero's Super Power:  {}").format(self.getSuperPower())
        print("Hero's Costume Color:  {}").format(self.heroColor)
        print("Hero's Birth Place:  {}").format(self.getBirthPlace())
        print("Hero's Home World:  {}").format(self.getBirthPlanet())

    # get and set Hero attributes
    def getSuperPower(self):
        return self.superPower

    def setSuperPower(self, superPower):
        self.superPower = superPower
    
    def getBirthPlanet(self):
        return self.birthPlanet

    def setBirthPlanet(self, birthPlanet):
        self.birthPlanet = birthPlanet