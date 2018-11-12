""" Ricky Smith, Networking:  Lab 2-2A Server, 21 Sept 2018 """

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",9999))
s.listen(5)
c,a = s.accept()

data = c.recv(1024)

print("I received the following:\n")
print(data) 
print("\n===========================\n")

dataSplit = data.split()

dataReverseList = dataSplit[::-1]
dataReverseStr = str(dataReverseList)

print("I will send back the following:\n")
print(dataReverseStr)

c.send(dataReverseStr)

c.send("\nGoodbye Client")
c.close()