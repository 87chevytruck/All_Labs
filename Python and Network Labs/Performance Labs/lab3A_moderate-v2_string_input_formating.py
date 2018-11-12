""" Ricky Smith; Lab 3A: Formating; 6 Sep 2018 
            **** Simple ****
Requirments
Adhere to PEP8 (Comments, formatting, style, etc)
Create a handfull of pharses that require different numbers of inputs
Prompt the user for input(s):
Inputs can be done a number of ways...
(SIMPLE) Ask user for input directly, tell them if the word(s) need to be a 
verb, noun, etc.
(Moderate) Give the user a handful of choices per input to choose from.You 
will need to create a bank of verbs, nouns, etc for this.
(Harder) Give the user cards based off the actual game. Allowing them to 
draw, etc following the rules. Allow them to only input those cards.
(opitional) Implement basic user input checking:
Check to ensure words are words, numbers are numbers (there are many ways to 
do this)
Ensure symobls aren't used if they are not needed
Check length
etc
Implement re-input if input is incorrect
Output the user inputs into the given pharse
Use formatting to not only output the user inputs, but to create a UI within 
the terminal. Space out certain UI elements such as title of program, choices, 
menu deceration, etc.
"""
# print title
print("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *")
print(" * * * * You are playing MAD LIBS with A-N-I-M-A-L-S-! * * * * ")
print("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *")

# create serveral phrases
phrase1 = "I like to {} my {}."
phrase2 = "My favorite animal is {} and I love to {} icecream with my {}."
phrase3 = "The {} {}ed my homework while the {} {}ed with the {}."
phrase4 = "A {}, another {}, and a {} walk into the bar.  The {} got drunk."
phrase5 = "Word on the street is {} {}ed you with a {} and made you {}."
phrase6 = "You look like a {} and act like a {}.  Be more like a {}."
phrase7 = "The {} and {} {}ed your {} last night."

# create animal word lists
animal_bank = ["cat", "dog", "pig", "goat", "bat", "horse", "chicken", "cow"]
feeling_bank = ["happy", "sad", "mad", "excited", "scared"]
bodyPart_bank = ["foot", "hand", "face", "butt", "leg", "arm", "head"]
verb_bank = ["play", "eat", "lick", 
            "run", "slap"]

# created dictionaries from above lists
animal_dict = {i : animal_bank[i] for i in range(0, len(animal_bank))}
feeling_dict = {i : feeling_bank[i] for i in range(0, len(feeling_bank))}
bodyPart_dict = {i : bodyPart_bank[i] for i in range(0, len(bodyPart_bank))}
verb_dict = {i : verb_bank[i] for i in range(0, len(verb_bank))}

# get user input on which 2 animals to use
print("\n")
print(animal_dict)
input1 = raw_input("Select an animal by entering the number (i.e. 0 for cat):  ")
input1 = int(input1)
input2 = raw_input("Select second animal via the number (i.e. 0 for cat):  ")
input2 = int(input2)

# get user input on which feeling to use
print("\n")
print(feeling_dict)
input3 = raw_input("Select a feeling by entering the number (i.e. 1 for sad):  ")
input3 = int(input3)

# get user input on which bodypart to use
print("\n")
print(bodyPart_dict)
input4 = raw_input("Select a body part by entering the number (i.e. 4 for leg):  ")
input4 = int(input4)

# get user input on which verb to use
print("\n")
print(verb_dict)
input5 = raw_input("Select a verb by entering the number (i.e. 1 for eat):  ")
input5 = int(input5)

# print previously created phrases with words from user
print("\n\n")
print("* * * * Your animal phrases are:  * * * *")
print(phrase1).format(verb_dict[input5], animal_dict[input1])
print(phrase2).format(animal_dict[input1], verb_dict[input5], 
                      animal_dict[input2])
print(phrase3).format(animal_dict[input2], verb_dict[input5], 
                      animal_dict[input1], verb_dict[input5], 
                      animal_dict[input2])
print(phrase4).format(animal_dict[input2], animal_dict[input2], 
                      animal_dict[input1], animal_dict[input1])
print(phrase5).format(animal_dict[input1], verb_dict[input5],
                      bodyPart_dict[input4], feeling_dict[input3])
print(phrase6).format(animal_dict[input1], animal_dict[input1], 
                      animal_dict[input2])
print(phrase7).format(animal_dict[input2], animal_dict[input1], 
                      verb_dict[input5], bodyPart_dict[input4])
