""" Ricky Smith, Networking:  Lab 3-2A Server, 24 Sept 2018 """

from socket import *
from struct import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",6666))
s.listen(5)
c,a = s.accept()

data = c.recv(1024)

print("I received the following:\n")
dataBig = unpack('>HIhi', data)
print("Big Endian: \n{}\n\n".format(dataBig))

dataLittle = unpack('<HIhi', data)
print("Little Endian: \n{}\n\n".format(dataLittle))



c.close()