""" Ricky Smith, Networking:  Lab 1-2A Server, 19 Sept 2018 """

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",12345))
s.listen(5)
c,a = s.accept()

data = c.recv(1024)
print(data)

c.send("Well hello Client, nice to meet you.")

c.send("Goodbye Client")
c.close()