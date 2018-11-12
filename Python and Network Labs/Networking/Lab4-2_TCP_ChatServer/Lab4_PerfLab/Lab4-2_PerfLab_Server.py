""" Ricky Smith, Networking:  Lab 4 Performance Lab Server, 
    24 Sept 2018 """

from socket import *
from struct import *

# create socket connection
s = socket(AF_INET, SOCK_STREAM)
s.bind(("",12345))
s.listen(5)
c,a = s.accept()

# get the data from client
data = c.recv(1024)

print("I received the following:\n")

# unpack data as it is (prints hex and bin as dec)
dataRcv = unpack('!IIccII', data)
print("Big Endian (Network Order): \n{}\n\n".format(dataRcv))

# create new tupile for converting dec back to hex and bin)
dataConvertedBack = (dataRcv[0], dataRcv[1], dataRcv[2], dataRcv[3], 
                     hex(dataRcv[4]), bin(dataRcv[5]))

print("Converted Back to original: \n{}\n\n".format(dataConvertedBack))



c.close()