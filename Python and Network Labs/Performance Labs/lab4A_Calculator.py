""" Ricky Smith, Lab4A:  Calculator, 10 Sep 2018 """

# def add = lambda x, y: x+y

# def sub = lambda x, y: x-y

# def multi = lambda x, y: x*y
def multi(x, y):
    return x * y

# def divide = lambda x, y: x/y
def divide(x, y):
    return x / y

# def power = lambda x, y: x**y
def power(x, y):
    return x ** y

def fib(n):
    a = 0
    b = 1
    c = 0

    for i in range(n):
        if c < 100:
            a, b = b, a + b
            c += 1
    return a

def fac(userNum):
    staticNum = userNum
    factNum = userNum

    # loops through while userNum is greater than 1 
    # (userNum changes value by -1 each loop)
    while userNum > 1:
        userNum -= 1
        factNum *= userNum
    
    return factNum


input = "yes"
while input == "yes":
    print("Select a calculation option from the following options:")
    userInput = raw_input("1)  add two numbers\n2)  subtract two numbers\n3)  multiply two numbers\n4)  divide two numbers\n5)  power of two numbers\n6)  Factorial a number\n7)  fibonacci a number\n")
    userInput = int(userInput)
    if userInput == range(1,7):
        print("within range")
        input = "yes"
    else:
        if userInput == 1:
            x = raw_input("What is the first number you would like to add?  ")
            x = float(x)
            y = raw_input("What is the secound number you would like to add to the previous number?  ")
            y = float(y)
            z = lambda x, y: x+y
            # print("{} + {} = ").format(x, y),
            # print z(x, y)
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*{:8.2f}     + {:8.2f} =   *").format(x, y)
            print("*                            *")
            print("*                            *")
            print("*         {:8.2f}           *").format((z(x, y)))
            print("*                            *")
            print("*                            *")
            print("******************************")

        elif userInput == 2:
            x = raw_input("What is the first number you would like to subtract?  ")
            x = float(x)
            y = raw_input("What is the secound number you would like to subtract from the previous number?  ")
            y = float(y)
            z = lambda x, y: x-y
            print("{} - {} = ").format(x, y),
            # print z(x, y)
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*{:8.2f}     - {:8.2f} =   *").format(x, y)
            print("*                            *")
            print("*                            *")
            print("*         {:8.2f}           *").format((z(x, y)))
            print("*                            *")
            print("*                            *")
            print("******************************")

        elif userInput == 3:
            x = raw_input("What is the first number you would like to multiply?  ")
            x = float(x)
            y = raw_input("What is the secound number you would like to multiply to the previous number?  ")
            y = float(y)
            z = multi(x, y)
            # print("{} x {} = {}").format(x, y, z)
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*{:8.2f}     x {:8.2f} =   *").format(x, y)
            print("*                            *")
            print("*                            *")
            print("*         {:8.2f}           *").format(z)
            print("*                            *")
            print("*                            *")
            print("******************************")

        elif userInput == 4:
            x = raw_input("What is the first number you would like to divide?  ")
            x = float(x)
            y = raw_input("What is the secound number you would like to divide into the previous number?  ")
            y = float(y)
            z = divide(x, y)
            # print("{} / {} = {}").format(x, y, z)
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*{:8.2f}     / {:8.2f} =   *").format(x, y)
            print("*                            *")
            print("*                            *")
            print("*         {:8.2f}           *").format(z)
            print("*                            *")
            print("*                            *")
            print("******************************")

        elif userInput == 5:
            x = raw_input("What is the first number you would like get the power of?  ")
            x = float(x)
            y = raw_input("What is the secound number you would like the previous number powered to?  ")
            y = float(y)
            z = power(x, y)
            # print("{} ^ {} = {}").format(x, y, z)
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*{:8.2f}     ^ {:8.2f} =   *").format(x, y)
            print("*                            *")
            print("*                            *")
            print("*   {:15.2f}          *").format(z)
            print("*                            *")
            print("*                            *")
            print("******************************")

        elif userInput == 6:
            x = raw_input("What is number do you want to Factor?  ")
            x = int(x)
            if x > 22:
                print("ERROR:  Input larger than 22\n")
                continue
            # print(fac(x))
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*      Factor of  {:-4} =     *").format(x)
            print("*                            *")
            print("*                            *")
            print("*    {:-22}  *").format(fac(x))
            print("*                            *")
            print("*                            *")
            print("******************************")

        elif userInput == 7:
            x = raw_input("What is number do you want to Fibonacci?  ")
            x = int(x)
            if x > 100:
                print("ERROR:  Input larger than 100\n")
                continue
            
            # print(fib(x))
            print("******************************")
            print("*                            *")
            print("*                            *")
            print("*                            *")
            print("*    Fibonacci of {:-4} =     *").format(x)
            print("*                            *")
            print("*                            *")
            print("*    {:-22}  *").format(fib(x))
            print("*                            *")
            print("*                            *")
            print("******************************")
        
        else:
            print("ERROR:  Invalid Selection")

        anotherCalcualtion = raw_input("Would you like to perform another calculation? (yes/no)  ")
        if anotherCalcualtion == "yes":
            input = "yes"
        elif anotherCalcualtion == "YES":
            input = "yes"
        elif anotherCalcualtion == "y":
            input = "yes"
        elif anotherCalcualtion == "Y":
            input = "yes"
        else:
            input = "no"