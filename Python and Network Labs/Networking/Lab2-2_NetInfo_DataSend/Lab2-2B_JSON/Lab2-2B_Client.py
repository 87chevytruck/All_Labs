""" Ricky Smith, Networking:  Lab 2-2B Client, 21 Sept 2018 """

import json
from socket import *

s = socket(AF_INET, SOCK_DGRAM)
# s.connect(("192.168.31.131", 12345))
sendDictPicks = {'pick1': 'pickOne', 'pick2': 'pickTwo', 'pick3': 'pickThree'}
print("\n\nsendDictPicks is:\n{}\n").format(sendDictPicks)
print("sendDictPicks is type:  {}").format(type(sendDictPicks))

print("\n===============================\n")

sendJSONpicks = json.dumps(sendDictPicks)
print("sendJSONpicks is:\n{}\n").format(sendJSONpicks)
print("sendJSONpicks is type:  {}").format(type(sendJSONpicks))



s.sendto(sendJSONpicks,("192.168.31.132", 12345))

data, addr = s.recvfrom(1024)


print(data) 
