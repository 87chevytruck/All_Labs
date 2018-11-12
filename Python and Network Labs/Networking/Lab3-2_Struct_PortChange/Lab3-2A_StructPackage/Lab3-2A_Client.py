""" Ricky Smith, Networking:  Lab 3-2A Client, 24 Sept 2018 """

from socket import *
from struct import *




s = socket(AF_INET, SOCK_STREAM)
s.connect(("192.168.31.132", 6666))

string1 = pack('=HIhi', 1, 2, -3, -4)


s.send(string1)