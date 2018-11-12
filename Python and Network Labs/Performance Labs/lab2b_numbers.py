"""Ricky Smith, Python2 lab2b, 4 Sep 2018"""
print "==================================="

# TODO: Set x equal to 545
x = 545

# TODO: Set y equal to 24
y = 24

# TODO: Set binX equal to bin representation of x
binX = bin(x)

# TODO: Set binY equal to bin representation of y
binY = bin(y)

print "{} is {} in binary. {} is {} in binary.".format(x, binX, y, binY)

print "Values before modification: x: {} and y: {}".format(x, y)


# TODO: manually flip the third bit in x
x = x | 4

# TODO: manually flip the 1st bit in y
y = y | 1

print "Values after modificaiton: x: {} and y: {}".format(x, y)

# NOTE: You may need to add additional re-asignments for the TODOs below
# TODO: sum of x and y as a hex value
z = x + y
answer1 = hex(z)

# TODO: difference of x minus y as int
answer2 = x - y

# TODO: product of x and y as octal
z = x*y
answer3 = oct(z)

# TODO: quotient of x divided by y as binary
z = x/y
answer4 = bin(z)

# TODO: x modulus 3 as int
z = x % 3
answer5 = int(z)

# TODO: y squared as int
z = y ** 2
answer6 = int(z)

print "1: {}\n2: {}\n3: {}\n4: {}\n5: {}\n6: {}\n \b===================================".format(answer1, answer2, answer3, answer4, answer5, answer6)

# TODO: Using prefixes and conversions:

## TODO: Set binA == 0011, set binB to 1001
binA = 0b0011
binB = 0b1001

## TODO: binA AND binB, assign the value to binC
binC = binA & binB

## TODO: Set decA to decimal version of binA, set decB to decimal version of binB
decA = binA
decB = binB

## TODO: Set binA to bin representation of binA, set binB to the bin representation of binB
binA = bin(binA)
binB = bin(binB)

print "Results:\n-Decimal- A: {} B: {}\n-Binary- A: {} B: {}".format(decA, decB, binA, binB)