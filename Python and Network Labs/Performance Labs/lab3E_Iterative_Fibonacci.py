""" Ricky Smith; Lab 3E; 7 Sep 2018 
            
Performance Lab 3E: Fibonacci (Iterative)
Instructions:
Write a file that prints out the first 100 numbers in the Fibonacci sequence 
iteratively
Revist this lab and create a Fibonacci recursive function
"""
# declared variables
a = 0
b = 1
c = 0

# get user input and make it an int
input = raw_input("Enter a positive integer, and I will fibonacci it:  ")
input = int(input)

# iterate through, c is used to control how many times it loops
for i in range(input):
    if c < 100:
        a, b = b, a + b
        print(a)
        c += 1




