""" Ricky Smith, Lab5A:  Modules & Packages, 12 Sep 2018 
        Lab5A Definitions
"""

# def multi function
def multi(x, y):
    return x * y

# def divide function
def divide(x, y):
    return x / y

# def power function
def power(x, y):
    return x ** y

# def fibonacci function (itterative version for fast result)
def fib(n):
    a = 0
    b = 1
    c = 0

    for i in range(n):
        if c < 100:
            a, b = b, a + b
            c += 1
    return a

# def factorial function
def fac(userNum):
    staticNum = userNum
    factNum = userNum

    # loops through while userNum is greater than 1 
    ## (userNum changes value by -1 each loop)
    while userNum > 1:
        userNum -= 1
        factNum *= userNum
    
    return factNum

# Input validation for integer
def inputInt(n):
    while True:
        try:
            inputNum = int(raw_input(n))
        except ValueError:
            print("ERROR:  Input is not a whole integer, try again.")
        else:
            return inputNum
            break

# Input validation for float
def inputFloat(n):
    while True:
        try:
            inputNum = float(raw_input(n))
        except ValueError:
            print("ERROR:  Input is not a float, try again.")
        else:
            return inputNum
            break

def printTop():
        print("\n******************************")
        print("*                            *")
        print("*                            *")
        # print("*                            *")

def printMid():
        print("*                            *")
        print("*                            *")

def printBot():
        print("*                            *")
        print("*                            *")
        print("******************************\n")

# variable evaluation function
def equals(n):
    """Handles the math for the equation when the user presses 
    equals
    """ 
    #The try except here catches if the user inputs anything that
    #wouldn't make sense IE putting letters in
    try: 
        total = str(eval(n)) 
        return total 
    except: 
        print("ERROR ERROR ERROR")
