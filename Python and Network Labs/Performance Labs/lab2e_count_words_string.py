""" Ricky Smith, Lab 2E: Strings, 5 Sep 2018 """
# count number of words in string
## prompt user for input and assign string to variable user_input
user_input = raw_input("What is your string?")
print "Your string is:  {}".format(user_input)
print "============================"

# print the number of words (uses space as default delimeter for split)
print len(user_input.split())
