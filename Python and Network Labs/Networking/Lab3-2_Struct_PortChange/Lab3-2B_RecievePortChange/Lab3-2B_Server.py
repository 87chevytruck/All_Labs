""" Ricky Smith, Networking:  Lab 3-2B Server, 24 Sept 2018 """

from socket import *

# creates socket to be used
s = socket(AF_INET, SOCK_DGRAM)

# binds socket with the listening port 12345
s.bind(("",12345))


# receive message and call it string1
string1, addr = s.recvfrom(1024)

# print current socket/address info
print("\n==========\n\n{}\n\n===========\n".format(addr))

IPadd = addr[0]
IPport = addr[1]

# create new address tuple using new port number
newAddr = (IPadd, IPport + 1)


print("\n==========\n\n{}\n\n===========\n".format(newAddr))

print("\nRecieved String is:\n{}\n").format(string1)

# breakout string1 into list, then sort the list by word length
list1 = string1.split()
list2 = sorted(list1, key=len)

print("String Split into Words are:\n{}\n").format(list1)

# turn sorted list back into string with spaces separating words
string2 = " ".join(list2)

print("Same String with words reversed is:\n{}\n".format(string2))

# creat new socket for sending on different port
newS = socket(AF_INET, SOCK_DGRAM)

# send string over new socket witht he new port
newS.sendto(string2,(IPadd, (IPport + 1)))