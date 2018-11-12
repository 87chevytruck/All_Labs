""" Ricky Smith, Lab5C:  Update Hero Class, 14 Sep 2018 """

from Hero_Class import Hero

def userInterface():
    # set hero 1 and 2's information using the class Hero
    hero1 = Hero("The Invisible Hulk", "N/A (he's sort of invisible)", 
                        "Blackhole X-43")
    hero2 = Hero("The Incredible Lady", "N/A (she's sort of invisible)", 
                "Lunar S-7")

    # set hero 1's information using the class Hero/Person functions
    hero1.setAge(143)
    hero1.setFname("Jack")
    hero1.setLname("Smith")
    hero1.setSuperPower("Super Strength and Inisibility")
    hero1.setBirthPlace("Secret Location")

    # set hero 1's information using the class Hero/Person functions
    hero2.setAge(718)
    hero2.setFname("Aria")
    hero2.setLname("Luna")
    hero2.setSuperPower("God Like Powers (Immortal, Telekinetic, Telepathic, "
                        "Invisibility, Super Strength, etc.)")
    hero2.setBirthPlace("UNKNOWN")

    # user input for Hero X
    x1 = raw_input("What is your Hero Name?  ")
    x2 = raw_input("What is your Hero's Costume Colors?  ")
    x3 = raw_input("What is your Hero's Home World?  ")
    x4 = raw_input("What is your Hero's Age?  ")
    x5 = raw_input("What is your Hero's Real First Name?  ")
    x6 = raw_input("What is your Hero's Real Last Name?  ")
    x7 = raw_input("What are your Hero's Super Powers?  ")
    x8 = raw_input("What is your Hero's Place of Birth?  ")

    # set Hero X's stats via previous user input
    heroX = Hero(x1, x2, x3)
    heroX.setAge(x4)
    heroX.setFname(x5)
    heroX.setLname(x6)
    heroX.setSuperPower(x7)
    heroX.setBirthPlace(x8)

    # display hero 1 ,2 and X's info
    print("= = = = = = = Hero 1 = = = = = = =")
    hero1.printDetails()
    print("\n= = = = = = = Hero 2 = = = = = = =")
    hero2.printDetails()
    print("\n= = = = = = = Hero X = = = = = = =")
    heroX.printDetails()

