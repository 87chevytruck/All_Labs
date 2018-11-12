""" Ricky Smith; Lab 3E; 7 Sep 2018 
            
Performance Lab 3E: Fibonacci (Recursive)
Instructions:
Write a file that prints out the first 100 numbers in the Fibonacci sequence 
iteratively
Revist this lab and create a Fibonacci recursive function
"""
def fib(n):
    if n <= -1:
        return 0
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        # print(n)
        return (fib(n-1) + fib(n - 2))

# input = raw_input("Enter a positive integer, and fibonacci will happen:  ")
# input = int(input)


for i in range(fib(10)):
    print(fib(10))

