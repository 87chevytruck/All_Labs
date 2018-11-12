""" Ricky Smith, Networking:  Lab 2-2B Server, 21 Sept 2018 """
import json
from socket import *

# creates socket to be used
s = socket(AF_INET, SOCK_DGRAM)

# binds socket with the listening port 12345
s.bind(("",12345))


# only does something when true (i.e., waits to recieve)
recvJSONpicks, addr = s.recvfrom(1024)

print("\nrecvJSONpicks is:\n{}\n").format(recvJSONpicks)
print("recvJSONpicks is type:  {}").format(type(recvJSONpicks))

print("\n===============================\n")

recvDictPicks = json.loads(recvJSONpicks)

print("recvDictPicks is:\n{}\n").format(recvDictPicks)
print("recvDictPicks is type:  {}\n").format(type(recvDictPicks))


resp = "\nThanks for the dictPicks ;-)\n"
s.sendto(resp, addr)