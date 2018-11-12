""" Ricky Smith, Networking:  Lab 1-2A Client, 19 Sept 2018 """

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.connect(("192.168.31.131", 12345))

s.send("Hello Server, my name is Client.")

resp = s.recv(1024)
print(resp)

s.recv(1024)