"""Ricky Smith, Python2 lab2b, 4 Sep 2018"""
a = 30.00
b = 21.84
c = 89.11
t = 0.08

x = a + (a*t)
y = b + (b*t)
z = c + (c*t)

print "Tax is 8%"
print "${:.2f} plus 8% tax is:  ${:.2f}".format(a, x)
print "${:.2f} plus 8% tax is:  ${:.2f}".format(b, y)
print "${:.2f} plus 8% tax is:  ${:.2f}".format(c, z)
