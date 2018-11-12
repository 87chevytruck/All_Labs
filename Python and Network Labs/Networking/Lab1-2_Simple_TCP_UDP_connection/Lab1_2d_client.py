""" Ricky Smith, Networking:  Lab 1-2D Client, 19 Sept 2018 """

from socket import *

s = socket(AF_INET6, SOCK_DGRAM)

s.sendto("Hello Server, my name is udpClient.",("fe80::4136:c73f:b73b:24e7", 12345))

data, addr = s.recvfrom(1024)


print(data) 

