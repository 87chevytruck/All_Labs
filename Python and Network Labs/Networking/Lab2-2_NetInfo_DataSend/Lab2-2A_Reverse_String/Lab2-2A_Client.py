""" Ricky Smith, Networking:  Lab 2-2A Client, 21 Sept 2018 """

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.connect(("192.168.31.132", 9999))

s.send("Hello Server, my name is Client.  Will you reverse my string?")

resp = s.recv(1024)
print(resp)

s.recv(1024)
