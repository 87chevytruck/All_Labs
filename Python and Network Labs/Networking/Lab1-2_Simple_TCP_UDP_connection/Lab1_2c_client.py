""" Ricky Smith, Networking:  Lab 1-2C Client, 19 Sept 2018 """

from socket import *

s = socket(AF_INET, SOCK_DGRAM)
# s.connect(("192.168.31.131", 12345))

s.sendto("Hello Server, my name is udpClient.",("192.168.31.131", 12345))

data, addr = s.recvfrom(1024)


print(data) 

