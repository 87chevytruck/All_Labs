""" Ricky Smith; Student Code: Lab3C "Fun House"; 7 Sep 2018

Instructions
Create a text-based game where the user is navigating through a "Fun" House. 
Prompt the user to make a decision and using if/elif/else statements, give 
them different outcomes based on their answers. Begin with an introduction 
to your fun house and prompt the user to choose between at least three 
different options. You can use nested if/elif/else statements to make the 
game more complex.

Requirments
Adhere to PEP8 (Comments, formatting, style, etc)
Utilize userinput
Utilize proper formatting
Utilize proper and clean if/elif/else statements
Follow instructions above
Additional
Take this a step further. Use some previous concepts. Here are some things 
you can do:
Create a file that holds all of your prompts
Store file prompts into a list, dict, etc
Use if/elif/else statements to validate user input
Use formatting to create UI elements and/or fancy prompts
Use operators and user input to perform calculations based on prompts
etc
"""
# set count for start of while loop
count = 1
while count == 1:
    print("=+==+==+==+==+==+==+==+==+==+==+==+==+==+==+==+=")
    print("\n       Welcome to the HoUsE oF fUn!!!!!\n")
    print("=+==+==+==+==+==+==+==+==+==+==+==+==+==+==+==+=\n\n")
    print("You have 3 doors to chose from...care to take a chance?\n")
    input = raw_input("Which door do you want to open? (1, 2, or 3)\n")
   
    # door 1 selected
    if input == "1":
        print("Let's play a game of chance... If you lose, you will die...")
        print("I will flip a coin, you should call heads or tails!")
        door1 = raw_input("...remember...choose wrong ...you die...\n")
        print("YOU FOOL!!!!  You got it wrong!  Now you die!!!!!!")
        count = 0

    # door 2 selected
    elif input == "2":
        print("Congratulations!  You're a WINNER!!!!")
        print("But wait....there's more doors!!!")
        print("You have 3 more doors...choose which one to get your prize.")
        doorPrize = raw_input("Which door do you want to open? (1, 2, or 3)\n")
       
        if doorPrize == "1":
            print("You've won 1 free ticket to the Donkey Show!"),
            print("(no questions asked...promise... ;-) )")
            count = 0

        elif doorPrize == "2":
            print("You've one a free trip for 3.5 to Paris!")
            print("(Disclaimer:  Not responsible for cleanup"),
            print("after cutting the fourth person in half...)")
            count = 0
        
        elif doorPrize == "3":
            print("You've won a chance to go through the HoUsE oF fUn again!")
            # goes back through while loop
            count = 1

        else:
            print("\nWRONG ANSWER... YOU DIE!!!\n")
            count = 0

    # door 3 selected
    elif input == "3":
        print("You should have picked door 2...")
        print("Now you must decide who to safe...")
        print("Your choice is to save the puppy or the kitten")
        animal = raw_input("Choose puppy or kitten now!\n")
        if animal == "puppy":
            print("kitten hater... I've decided I don't like you...die puppy die!")
            count = 0

        elif animal == "kitten":
            print("puppy hater... I've decided I don't like you...die kitten die!")
            count = 0
            
        else:
            print("Thank you for your sacrafice... you die but puppy and kitten live!")
            count = 0

    # incorrect choice when picking a door        
    else:
        print("You should have choosen a door...now you will die!")
        count = 0
            
print("\n\n * * * * * * * * * * * * * * * * * * * * *  ")
print("* * * *     GAME OVER BUTT FACE     * * * * ")
print(" * * * * * * * * * * * * * * * * * * * * *  ")