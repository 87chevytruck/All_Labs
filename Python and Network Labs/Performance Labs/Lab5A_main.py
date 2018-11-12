""" Ricky Smith, Lab5A:  Modules & Packages, 12 Sep 2018 
        Lab5A Main Code
"""
import time
import Lab5A_definitions

# hard sets input for while loop
input = "yes"
while input == "yes":
    print("\nSelect a calculation option from the following menu:")
    userInput = Lab5A_definitions.inputInt("1)  add two numbers\n2)  subtract two numbers\n"
                          "3)  multiply two numbers\n4)  divide two numbers\n"
                          "5)  power of two numbers\n6)  Factorial a number\n"
                          "7)  fibonacci a number\n8)  Variable Calculator\n")
    print("\n")

    # Addition
    if userInput == 1:
        x = Lab5A_definitions.inputFloat("What is the first number you would like to add?  ")
       
        y = Lab5A_definitions.inputFloat("What is the secound number you would like to add to "
                      "the previous number?  ")

        # uses lambda to calculate result vs defining a function
        z = lambda x, y: x+y

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*{:8.2f}     + {:8.2f} =   *").format(x, y)
        Lab5A_definitions.printMid()
        print("*         {:8.2f}           *").format((z(x, y)))
        Lab5A_definitions.printBot()

    # Subtraction
    elif userInput == 2:
        x = Lab5A_definitions.inputFloat("What is the first number you would like to "
                       "subtract?  ")
        y = Lab5A_definitions.inputFloat("What is the secound number you would like to "
                       "subtract from the previous number?  ")

        # uses lambda to calculate result vs defining a function
        z = lambda x, y: x-y

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*{:8.2f}     - {:8.2f} =   *").format(x, y)
        Lab5A_definitions.printMid()
        print("*         {:8.2f}           *").format((z(x, y)))
        Lab5A_definitions.printBot()

    # Multiplication
    elif userInput == 3:
        x = Lab5A_definitions.inputFloat("What is the first number you would like to "
                       "multiply?  ")
        y = Lab5A_definitions.inputFloat("What is the secound number you would like to "
                       "multiply to the previous number?  ")
        z = Lab5A_definitions.multi(x, y)

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*{:8.2f}     x {:8.2f} =   *").format(x, y)
        Lab5A_definitions.printMid()
        print("*         {:8.2f}           *").format(z)
        Lab5A_definitions.printBot()

    # Division
    elif userInput == 4:
        x = Lab5A_definitions.inputFloat("What is the first number you would like to divide?  ")
        y = Lab5A_definitions.inputFloat("What is the secound number you would like to divide "
                      "into the previous number?  ")
        z = Lab5A_definitions.divide(x, y)

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*{:8.2f}     / {:8.2f} =   *").format(x, y)
        Lab5A_definitions.printMid()
        print("*         {:8.2f}           *").format(z)
        Lab5A_definitions.printBot()

    # Exponents
    elif userInput == 5:
        x = Lab5A_definitions.inputFloat("What is the first number you would like get the "
                       "power of?  ")
        y = Lab5A_definitions.inputFloat("What is the secound number you would like the "
                      "previous number powered to?  ")
        z = Lab5A_definitions.power(x, y)

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*{:8.2f}     ^ {:8.2f} =   *").format(x, y)
        Lab5A_definitions.printMid()
        print("*   {:15.2f}          *").format(z)
        Lab5A_definitions.printBot()

    # Factorial
    elif userInput == 6:
        x = Lab5A_definitions.inputInt("What is number do you want to Factor?  ")
        
        # Limits input for display purposes
        if x > 22:
            print("ERROR:  Input larger than 22\n")
            continue

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*      Factor of  {:-4} =     *").format(x)
        Lab5A_definitions.printMid()
        print("*    {:-22}  *").format(Lab5A_definitions.fac(x))
        Lab5A_definitions.printBot()

    # Fibonacci
    elif userInput == 7:
        x = Lab5A_definitions.inputInt("What is number do you want to Fibonacci?  ")
        
        # Limits input for display purposes
        if x > 100:
            print("ERROR:  Input larger than 100\n")
            continue

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*    Fibonacci of {:-4} =     *").format(x)
        Lab5A_definitions.printMid()
        print("*    {:-22}  *").format(Lab5A_definitions.fib(x))
        Lab5A_definitions.printBot()
    
    # Variable Math Calculation
    elif userInput == 8:
        expression = raw_input("Manually type your equation using only "
                               "numbers and the following operators:  \n"
                               " (),  +,  -,  *,  /,  **  :  \n")
        x = Lab5A_definitions.equals(expression)
        print(expression)
        print(x)

        # prints the "screen" with equation and result
        Lab5A_definitions.printTop()
        print("*    {:^22}  *").format(expression)
        Lab5A_definitions.printMid()
        print("*    ={:^22} *").format(x)
        Lab5A_definitions.printBot()
    # prints ERROR if selection 1 - 7 not chosen
    else:
        print("ERROR:  Invalid Selection")

    # promts and assigns variable to use if statements to reassign 
    ## 'input' for while loop
    anotherCalcualtion = raw_input("Would you like to perform another "
                                   "calculation? (yes/no)  ")
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

# print out for poops and giggles
print("Thanks for visiting, we hope you come back soon!\n")
print("\tThis program will end in:\n")
time.sleep(.5)
print("\t\t3\n")
time.sleep(.9)
print("\t\t2\n")
time.sleep(.9)
print("\t\t1\n")
time.sleep(.9)
print("\t** Calculator Over **\n")