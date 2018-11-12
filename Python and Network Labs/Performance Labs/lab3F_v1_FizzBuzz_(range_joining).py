""" Ricky Smith; Lab 3F; 10 Sep 2018 
            
Performance Lab 3F: FizzBuzz

Instructions:
Iterate thorugh a loop 100 times... printing "Fizz" for any number divisable 
by 3, and "Buzz" for any number divisable by 5.  If the number is divisable 
by both... print "FizzBuzz".  All other numbers... print the number.


        *** Standard loop format ***

                followed by

         *** Shortest One Liner ***

"""
# for loop itterate through range from 1 to 101 (so we can start at index 1 
# and end at index 100)
for i in range(1,101):

    # first check if index number divisable by both 3 and 5
    if (i%3 == 0 and i%5 == 0):
        print("FizzBuzz")

    # second check for divisible by 3
    elif (i%3 == 0):
        print("Fizz")

    # third divisible by 5
    elif (i%5 == 0):
        print("Buzz")

    # if nothing matches, print index number
    else:
        print(i)


print("\n\n========================\n\n")

print ('\n'.join("Fizz"*(i%3==0)+"Buzz"*(i%5==0) or str(i) for i in 
    range(1,101)))