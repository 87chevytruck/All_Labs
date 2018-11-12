""" Ricky Smith, Lab 2D: Strings, 5 Sep 2018 """
# reverse function:  reverse user input string and print it to uppercase
def reverse():
    ## prompt user for input and assign string to variable user_input
    user_input = raw_input("What is your string?")
    print user_input
    print "==============="
    print "your string in reverse is:"

    # reverses string
    user_input = user_input[::-1]
    print user_input
    print "your string in reverse and uppercase is"

    # prints string in all uppercase
    print user_input.upper()

reverse()
