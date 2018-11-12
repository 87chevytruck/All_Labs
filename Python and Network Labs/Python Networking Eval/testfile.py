""" Ricky Smith - Python Networking Evaluation - 9 Oct 18 """

#!/usr/bin/env python

import os, glob, subprocess

"""
# Given a list of strings (['string1', 'string2', 'string3']), reverse all of the characters, and
# join them all together into a single string, with each previous word separated by spaces
# (the above example becomes '1gnirts 2gnirts 3gnirts')
"""
def first_test(string_list):
	# create new temp list
	newList = []
	# loop through any list of strings provided
	for i in range(len(string_list)):
		# append old original list items to newList, but reverse the string in each item
		newList.append(string_list[i][::-1])
	# create a new string by joining the newList items with a space
	newString = " ".join(newList)
	# return the newString
	return newString

"""
# Given a directory path, find each file that ends with '.txt', and create a dictionary,
# where each element consists of the filename, and its contents (e.g., if we had a file called
# "foo.txt" that contained "AAAA", our dictionary would look like: 
# { "evalFolder\\foo.txt" : "AAAA" }). This dictionary will be our return item.
"""
def third_test(fname):
	# create dictionary to return later
	fileDict = {}
	# loop through files in the directory passed into function
	for filename in os.listdir(fname):
		# run only if ".txt" is found at the end of file
		if filename.endswith(".txt"):
			# open the file using path and file name for read only access
			f = open(os.path.join(fname, filename), 'r')
			# save data read from file
			fileData = f.read()
			# build dictionary using path and file name as the key, and fileData as value
			fileDict[os.path.join(fname, filename)] = fileData
			# close the file
			f.close()
		
	return fileDict


# run first_test to ensure function works
string_list = ['string1', 'string2', 'string3']
graded_string = first_test(string_list)
print(graded_string)


# run third_test to ensure function works
print(third_test("evalFolder"))
