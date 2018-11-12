""" Ricky Smith, Networking:  Lab 1-2B Client, 19 Sept 2018 """

from socket import *

s = socket(AF_INET6, SOCK_STREAM)
s.connect(("fe80::4136:c73f:b73b:24e7", 12345))

s.send("Hello Server, my name is Client.")

resp = s.recv(1024)
print(resp)

s.recv(1024)