""" Ricky Smith, Networking:  Lab 3-2B Client, 24 Sept 2018 """

from socket import *

# create socket
s = socket(AF_INET, SOCK_DGRAM)

string1 = "My name is Ricky Smith, and I am the coolest dude ever."

# send string1 over socket to IP and Port combination
s.sendto(string1,("192.168.31.133", 12345))

print("\n\nThis is what I sent:\n{}\n").format(string1)

print("\n===============================\n")

# uses socket info to grab current port, then add 1
## assign that to newPort
newPort = s.getsockname()[1] + 1

# creat new socket
sNew = socket(AF_INET, SOCK_DGRAM)

# bind new socket to listen for anyting on newPort
sNew.bind(("", newPort))
string2, addr = sNew.recvfrom(1024)

print("This is what I received:\n{}\n").format(string2)
