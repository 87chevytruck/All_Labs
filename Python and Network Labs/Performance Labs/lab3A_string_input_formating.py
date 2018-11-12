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

phrase1 = "I eat {} and sleep on {}."
phrase2 = "My favorite animal is {} and I love to go {} with my {}."
phrase3 = "The best sport is {} and my favorite team is {}.  The championship game will be held at {}."

word1 = raw_input("Please enter first word:  ")
word2 = raw_input("Please enter second word:  ")
word3 = raw_input("Please enter third word:  ")
word4 = raw_input("Please enter fourth word:  ")

print(phrase1).format(word1, word2)
print(phrase2).format(word2, word3, word4)
print(phrase3).format(word3, word4, word1)
