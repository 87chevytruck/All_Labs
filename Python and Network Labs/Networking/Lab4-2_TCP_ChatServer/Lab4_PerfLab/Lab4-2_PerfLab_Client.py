""" Ricky Smith, Networking:  Lab 4-2A Client, 26 Sept 2018 """

from socket import *
from struct import *

# create socket
s = socket(AF_INET, SOCK_STREAM)
s.connect(("192.168.31.135", 12345))

# pack and send data (converted hex and bin to dec)
string1 = pack('!IIccII', 12345, 56789, '&', '*', int(0x7d0), 
               int(0b11111010000))

s.send(string1)