""" Ricky Smith, Lab 2F: Strings, 5 Sep 2018 
    * check if two words are anagrams *
"""
# prompt user for input and assign string to variable userInput1
userInput1 = raw_input("What is your first word?")
print "Your first word is:  {}".format(userInput1)

# prompt user for input and assign string to variable userInput2
userInput2 = raw_input("What is your second word?")
print "Your second word is:  {}".format(userInput2)

# convert strings to lists for sorting purposes 
# (make all uppercase to eliminate case sensitivity)
x1 = list(userInput1.upper())
x2 = list(userInput2.upper())

# check if userInput1 and userInput2 are anagrams
if sorted(x1) == sorted(x2): 
    print "{} and {} are antagrams!".format(userInput1, userInput2)
else: 
    print "{} and {} are NOT antagrams!".format(userInput1, userInput2)