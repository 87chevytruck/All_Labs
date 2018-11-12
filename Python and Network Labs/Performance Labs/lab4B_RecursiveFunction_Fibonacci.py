""" Ricky Smith; Lab 4B; 10 Sep 2018 
            
Performance Lab 4B: Fibonacci (Recursive Function)

"""
# define recursive function
def fib(n):
    if n <= -1:
        return 0
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        # recursively calls fib function within the function
        return fib(n-2) + fib(n - 1)

# prompts, assigns, and changes input to int
n = raw_input("Enter a positive integer:  ")
n = int(n)

# prints fib function of input number
print(fib(n))