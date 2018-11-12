""" Ricky Smith; Lab 2H: Tuples, Maps, Dictionaries; 6 Sep 2018 

    Create a program that takes input of a group of students' names and 
    grades... then sorts them based on highest to lowest grade. Then 
    calculate and print the sorted list and the average for the class. 
    (Hint: Use Dictionaries!)
"""
# create dictionary
student_grades = {}
input = "Y"

# start while loop for input of students and grades
while (input == "Y"):
    student = raw_input("Enter Student's Name:")
    grade = raw_input("Enter Student's Grade:")
    grade = float(grade)
    student_grades[student] = grade
    input = raw_input("Type Y to enter another student, or N to exit:")
    input = input.upper()

print student_grades
print "======================================================"
print "    *****  Students sorted by Highest Grade  *****    "

# import operator, and use for sorting student grades into a new dictionary
import operator
sortedStudent_grades = sorted(student_grades.iteritems(), 
                              key=operator.itemgetter(1), 
                              reverse=True)
print sortedStudent_grades
print "======================================================"

#sum the grades, get total number of grades, use to average grades and print
grade_total = sum(student_grades.itervalues())
num_grades = len(student_grades.values())
grade_avg = grade_total / num_grades
print "Class's grade average is:  {:.2f}".format(grade_avg)
