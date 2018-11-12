""" Ricky Smith, Networking:  Lab 2-2C Server, 21 Sept 2018 """

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",6666))
s.listen(5)
c,a = s.accept()

data = c.recv(1024)

print("I received the following:\n")
print(data)




c.send("\nThankyou, Goodbye Client")
c.close()