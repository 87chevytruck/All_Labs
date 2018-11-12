""" Ricky Smith; Lab 3D: While Loops; 7 Sep 2018 
            
Lab 3D:
Instructions
Write a program that prompts a user to input an integer and calculates the 
factorial of that number using a while loop.
Requirments
Adhere to PEP8 (Comments, formatting, style, etc)
Utilize userinput
Utilize input validation
Utilize proper formatting
Utilize proper and clean loops and conditionals
Follow instructions above
"""
# get user input and change to int
userNum = raw_input("Enter an integer, and I will give you it's Factoral:  ")
userNum = int(userNum)

# set some variables to user's input for use later
staticNum = userNum
factNum = userNum

# loops through while userNum is greater than 1 
# (userNum changes value by -1 each loop)
while userNum > 1:
    userNum -= 1
    factNum *= userNum
      

print("\n\n")
print("\nThe factoral of {} via a while loop is {}.").format(staticNum, factNum)