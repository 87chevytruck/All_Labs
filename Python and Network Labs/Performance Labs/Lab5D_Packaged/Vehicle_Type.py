""" Ricky Smith, Lab5D:  Automotive Class, 14 Sep 2018 """

# create Vehicle Type class
class Vehicle_Type:
    def __init__(self, vType):
        self.vType = vType

        def setVehicleType(self, vType):
            self.vType = vType

        def getVehicleType(self):
            if vType == "truck":
                return "truck"
            elif vType == "car":
                return "car"
            elif vType == "SUV":
                return "SUV"
            elif vType == "van":
                return "van"
            else:
                return "ERROR:  Incorrect Vehicle Type Entered"

# Created Engine Class 
class Engine:
    def __init__(self, numCylinders, HP, TQ):
        self.numCylinders = numCylinders
        self.HP = HP
        self.TQ = TQ
    
    def setNumCylinders(self, numCylinders):
        numCylinders = int(numCylinders)
        if numCylinders < 2:
            return "ERROR:  Too few cylinders chosen."
        elif numCylinders > 12:
            return "ERROR:  Too many cylinders chosen."
        else:
            self.numCylinders = numCylinders
    
    def getNumCylinders(self):
        return self.numCylinders
    
    def setHP(self, HP):
        HP = int(HP)
        if HP > 1500:
            return "ERROR:  Too much power."
        elif HP < 50:
            return "ERROR:  Too little power."
        else:
            self.HP = HP

    def getHP(self):
        return self.HP

    def setTQ(self, TQ):
        TQ = int(TQ)
        if TQ > 2500:
            return "ERROR:  Too much TQ."
        elif TQ < 50:
            return "ERROR:  Too little TQ."
        else:
            self.TQ = TQ

    def getTQ(self):
        return self.TQ

# Created Vehicle Abilities Class (towing, doors, weight)
class Vehicle_Abilities:
    def __init__(self, vTowing, vWeight, vDoors):
        self.vTowing = vTowing
        self.vWeight = vWeight
        self.vDoors = vDoors

    def setTowing(self, vTowing):
        vTowing = int(vTowing)
        if vTowing < 0:
            return "ERROR:  Tow rating must be at least 0 lbs"
        elif vTowing > 30000:
            return "ERROR:  Tow rating is too high"
        else:
            self.vTowing = vTowing
    
    def getTowing(self):
        return self.vTowing

    def setWeight(self, vWeight):
        vWeight = int(vWeight)
        if vWeight < 1800:
            return "ERROR:  Vehicle weight must be at least 1,800 lbs"
        elif vWeight > 30000:
            return "ERROR:  Vehicle weight must be under 30,000 lbs"
        else:
            self.vWeight = vWeight
    
    def getWeight(self):
        return self.vWeight

    def setDoors(self, vDoors):
        vDoors = int(vDoors)
        if vDoors < 2:
            return "ERROR:  Vehicle must have at least 2 doors"
        elif vDoors > 5:
            return "ERROR:  Vehicle must have no more than 5 doors"
        else:
            self.vDoors = vDoors
    
    def getDoors(self):
        return self.vDoors

# Created Vehicle Options Class
class Vehicle_Options:
    def __init__(self, color, powerWindows, powerLocks, nav, premAudio, backCam, leatherSeats, heatedSeats, ventedSeats, blindSpot, autoTrans, driveTrain):
        self.powerWindows = powerWindows
        self.powerLocks = powerLocks
        self.nav = nav
        self.premAudio = premAudio
        self.backCam = backCam
        self.leatherSeats = leatherSeats
        self.heatedSeats = heatedSeats
        self.ventedSeats = ventedSeats
        self.blindSpot = blindSpot
        self.autoTrans = autoTrans
        self.driveTrain = driveTrain
        self.color = color

    # define set and get for Power Windows
    def setPowerWindows(self, powerWindows):
        if powerWindows == "Yes" or powerWindows == "yes" or powerWindows == "Y" or powerWindows == "y":
            self.powerWindows = "Yes"
        elif powerWindows == "No" or powerWindows == "no" or powerWindows == "N" or powerWindows == "n":
            self.powerWindows =  "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getPowerWindows(self, powerWindows):
        return self.powerWindows

    # define set and get for Power Locks
    def setPowerLocks(self, powerLocks):
        if powerLocks == "Yes" or powerLocks == "yes" or powerLocks == "Y" or powerLocks == "y":
            self.powerLocks = "Yes"
        elif powerLocks == "No" or powerLocks == "no" or powerLocks == "N" or powerLocks == "n":
            self.powerLocks = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getPowerLocks(self, powerLocks):
        return self.powerLocks


    # define set and get for Navigation
    def setNav(self, nav):
        if nav == "Yes" or nav == "yes" or nav == "Y" or nav == "y":
            self.nav = "Yes"
        elif nav == "No" or nav == "no" or nav == "N" or nav == "n":
            self.nav = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getNav(self, nav):
        return self.nav

    # define set and get Premium Audio
    def setPremAudio(self, premAudio):
        if premAudio == "Yes" or premAudio == "yes" or premAudio == "Y" or premAudio == "y":
            self.premAudio = "Yes"
        elif premAudio == "No" or premAudio == "no" or premAudio == "N" or premAudio == "n":
            self.premAudio = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getPremAudio(self, premAudio):
        return self.premAudio


    # define set and get Backup Camera
    def setBackCam(self, backCam):
        if backCam == "Yes" or backCam == "yes" or backCam == "Y" or backCam == "y":
            self.backCam = "Yes"
        elif backCam == "No" or backCam == "no" or backCam == "N" or backCam == "n":
            self.backCam = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getBackCam(self, backCam):
        return self.backCam



    # define set and get Leatehr Seats
    def setLeatherSeats(self, leatherSeats):
        if leatherSeats == "Yes" or leatherSeats == "yes" or leatherSeats == "Y" or leatherSeats == "y":
            self.leatherSeats = "Yes"
        elif leatherSeats == "No" or leatherSeats == "no" or leatherSeats == "N" or leatherSeats == "n":
            self.leatherSeats = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getLeatherSeats(self, leatherSeats):
        return self.leatherSeats
        

    # define set and get Heated Seats
    def setHeatedSeats(self, heatedSeats):
        if heatedSeats == "Yes" or heatedSeats == "yes" or heatedSeats == "Y" or heatedSeats == "y":
            self.heatedSeats = "Yes"
        elif heatedSeats == "No" or heatedSeats == "no" or heatedSeats == "N" or heatedSeats == "n":
            self.heatedSeats = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getHeatedSeats(self, heatedSeats):
        return self.heatedSeats

    # define set and get Vented Seats
    def setVentedSeats(self, ventedSeats):
        if ventedSeats == "Yes" or ventedSeats == "yes" or ventedSeats == "Y" or ventedSeats == "y":
            self.ventedSeats = "Yes"
        elif ventedSeats == "No" or ventedSeats == "no" or ventedSeats == "N" or ventedSeats == "n":
            self.ventedSeats = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getVentedSeats(self, ventedSeats):
        return self.ventedSeats

    # define set and get Blind Spot Detection
    def setBlindSpot(self, blindSpot):
        if blindSpot == "Yes" or blindSpot == "yes" or blindSpot == "Y" or blindSpot == "y":
            self.blindSpot = "Yes"
        elif blindSpot == "No" or blindSpot == "no" or blindSpot == "N" or blindSpot == "n":
            self.blindSpot = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getBlindSpot(self, blindSpot):
        return self.blindSpot

    # define set and get Automatic Trans
    def setAutoTrans(self, autoTrans):
        if autoTrans == "Yes" or autoTrans == "yes" or autoTrans == "Y" or autoTrans == "y":
            self.autoTrans = "Yes"
        elif autoTrans == "No" or autoTrans == "no" or autoTrans == "N" or autoTrans == "n":
            self.autoTrans = "No"
        else:
            return "ERROR:  You must enter Yes or No"

    def getAutoTrans(self, autoTrans):
        return self.autoTrans


    # define set and get Drive Train
    def setDriveTrain(self, driveTrain):
        if driveTrain == "AWD" or driveTrain == "awd" or driveTrain == "Awd":
            self.driveTrain = "AWD"
        elif driveTrain == "4x4" or driveTrain == "4 x 4" or driveTrain == "4wd" or driveTrain == "4WD":
            self.driveTrain = "4WD"
        elif driveTrain == "RWD" or driveTrain == "rwd" or driveTrain == "Rwd":
            self.driveTrain = "RWD"
        elif driveTrain == "FWD" or driveTrain == "fwd" or driveTrain == "Fwd":
            self.driveTrain = "FWD"
        else:
            return "ERROR:  You must enter RWD, FWD, 4WD, or AWD"

    def getDriveTrain(self, driveTrain):
        return self.driveTrain

    # define set and get vehicle color
    def setColor(self, color):
        self.color = color

    def getColor(self, color):
        return self.color


class Vehicle(Vehicle_Type, Engine, Vehicle_Abilities, Vehicle_Options):
 #   def __init__(self, vMake, vModel, vYear, vType, numCylinders, HP, TQ, vTowing, vWeight, vDoors, color, powerWindows, powerLocks, nav, premAudio, backCam, leatherSeats, heatedSeats, ventedSeats, blindSpot, autoTrans, driveTrain):
    def __init__(self, vMake, vModel, vYear):
        # self.Vehicle_Type = vType(vType)
        # self.Engine = Engine(numCylinders, HP, TQ)
        # self.Vehicle_Abilities = Vehicle_Abilities(vTowing, vWeight, vDoors)
        # self.Vehicle_Options = Vehicle_Options(color, powerWindows, powerLocks, nav, premAudio, backCam, leatherSeats, heatedSeats, ventedSeats, blindSpot, autoTrans, driveTrain)
        self.vMake = vMake
        self.vModel = vModel
        self.vYear = vYear

    def setVmake(self, vMake):
        self.vMake = vMake
    
    def getVmake(self):
        return self.vMake

    def setVmodel(self, vModel):
        self.vModel = vModel
    
    def getVmodel(self):
        return self.vModel

    def setVyear(self, vYear):
        self.vYear = vYear
    
    def getVyear(self):
        return self.vYear

    def printVehicle(self):
#    def printVehicle(self, vMake, vModel, vYear, vType, numCylinders, HP, TQ, vTowing, vWeight, vDoors, color, powerWindows, powerLocks, nav, premAudio, backCam, leatherSeats, heatedSeats, ventedSeats, blindSpot, autoTrans, driveTrain):
        print("Make of vehicle:  {}").format(self.vMake)
        print("Model of vehicle:  {}").format(self.vModel)
        print("Year of vehicle:  {}").format(self.vYear)
        print("Type of vehicle:  {}").format(self.vType)
        print("The vehicle has {} doors").format(self.vDoors)
        print("Color of vehicle:  {}").format(self.color)
        print("The Engine in the vehicle has:")
        print("\t{} - cylinders").format(self.numCylinders)
        print("\t{} - Horse Power").format(self.HP)
        print("\t{} - Torque").format(self.TQ)
        print("Does the vehicle have an Automatic Transmission:  {}").format(self.autoTrans)
        print("The vehicle has the following Drive Train:  {}").format(self.driveTrain)
        print("The vehicle has a curb weight of:  {} lbs").format(self.vWeight)
        print("The vehicle's towing capacity is:  {}").format(self.vTowing)
        print("The vehicle's options are as follows:")
        print("\tPower Windows:  {}").format(self.powerWindows)
        print("\tPower Locks:  {}").format(self.powerLocks)
        print("\tNavigation System:  {}").format(self.nav)
        print("\tPremium Audio System:  {}").format(self.premAudio)
        print("\tBackup Camera:  {}").format(self.backCam)
        print("\tLeather Seats:  {}").format(self.leatherSeats)
        print("\tHeated Seats:  {}").format(self.heatedSeats)
        print("\tCooled/Vented Seats:  {}").format(self.ventedSeats)
        print("\tBlind Spot Detection:  {}").format(self.blindSpot)


# user created vehicle
# vehicle_1 = Vehicle("Ford", "Mustang", 2018, "car", 8, 415, 430, 0, 3600, 2, "silver", "yes", "yes", "yes", "yes", "no", "no", "no", "no", "no", "y", "rwd")
vehicle_1 = Vehicle("Ford", "Mustang", 2018)


# vehicle_2 = Vehicle("Chevrolet", "Corvette", 2018, "car", 8, 650, 830, 0, 2800, 2, "blue", "yes", "yes", "n", "y", "yes", "no", "no", "no", "no", "no", "rwd")
vehicle_2 = Vehicle("Chevrolet", "Corvette", 2018)


x1 = raw_input("What is the Make of the vehicle?  ")
x2 = raw_input("What is the Model of the vehicle?  ")
x3 = raw_input("What is the Year of the vehicle?  ")
x10 = raw_input("How many Doors does the vehicle have?  ")
x11 = raw_input("What is the vehicle's primary color?  ")
x5 = raw_input("How many Cylinders does the engine have?  ")
x6 = raw_input("What is the engine's Horse Power?  ")
x7 = raw_input("What is the engine's Torque?  ")
x21 = raw_input("Does the vehicle have an Automatic Transmission?  ")
x22 = raw_input("What is the vehicle's Drive Train? (AWD, RWD, FWD, 4WD)  ")
x9 = raw_input("What is the vehicle's curb weight?  ")
x4 = raw_input("what is the Type of vehicle? (truck, car, van)  ")
x8 = raw_input("What is the vehicle's Towing Capacity?  ")
x12 = raw_input("Does the vehicle have Power Windows?  ")
x13 = raw_input("Does the vehicle have Power Locks?  ")
x14 = raw_input("Does the vehicle have Navigation?  ")
x15 = raw_input("Does the vehicle have Premium Audio?  ")
x16 = raw_input("Does the vehicle have a Backup Camera?  ")
x17 = raw_input("Does the vehicle have Leather Seats?  ")
x18 = raw_input("Does the vehicle have Heated Seats?  ")
x19 = raw_input("Does the vehicle have Cooled/Ventilated Seats?  ")
x20 = raw_input("Does the vehicle have Blind Spot Detection?  ")

# vehicle_X = Vehicle(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22)
vehicle_X = Vehicle(x1, x2, x3)
vehicle_X.vType = x4
vehicle_X.setNumCylinders(x5)
vehicle_X.setHP(x6)
vehicle_X.setTQ(x7)
vehicle_X.setTowing(x8)
vehicle_X.setWeight(x9)
vehicle_X.setDoors(x10)
vehicle_X.setColor(x11)
vehicle_X.setPowerWindows(x12)
vehicle_X.setPowerLocks(x13)
vehicle_X.setNav(x14)
vehicle_X.setPremAudio(x15)
vehicle_X.setBackCam(x16)
vehicle_X.setLeatherSeats(x17)
vehicle_X.setHeatedSeats(x18)
vehicle_X.setVentedSeats(x19)
vehicle_X.setBlindSpot(x20)
vehicle_X.setAutoTrans(x21)
vehicle_X.setDriveTrain(x22)


print("======= First Default Vechicle =======")
# vehicle_1.printVehicle()

print("\n\n======= Second Default Vechicle =======")

# vehicle_2.printVehicle()

print("\n\n======= User Created Vechicle =======")
vehicle_X.printVehicle()
