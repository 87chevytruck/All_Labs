""" Ricky Smith, Lab5C:  Update Hero Class, 14 Sep 2018 """

# create Person Class
class Person(object):
    def __init__(self, fName, lName, age, birthPlace):
        self.__fName = fName
        self.__lName = lName
        self.__age = age
        self.__birthPlace = birthPlace
    # create functions to set and get Person attributes
    def setFname(self, fName):
        self.__fName = fName

    def getFname(self):
        return self.__fName

    def setLname(self, lName):
        self.__lName = lName

    def getLname(self):
        return self.__lName
    
    def setAge(self, age):
        self.__age = age

    def getAge(self):
        return self.__age
    
    def getBirthPlace(self):
        return self.__birthPlace

    def setBirthPlace(self, birthPlace):
        self.__birthPlace = birthPlace
