""" Ricky Smith, Networking:  Lab 1-2C Server, 19 Sept 2018 """

from socket import *

# creates socket to be used
s = socket(AF_INET, SOCK_DGRAM)

# binds socket with the listening port 12345
s.bind(("",12345))


# only does something when true (i.e., waits to recieve)
while True:
    data, addr = s.recvfrom(1024)

    print(data) 

    resp = "Well hello Client, nice to meet you.  This is over UDP."
    s.sendto(resp, addr)

