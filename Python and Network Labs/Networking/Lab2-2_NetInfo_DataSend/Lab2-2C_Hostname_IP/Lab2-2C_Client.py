""" Ricky Smith, Networking:  Lab 2-2C Client, 21 Sept 2018 """

from socket import *


s = socket(AF_INET, SOCK_STREAM)
s.connect(("192.168.31.132", 6666))

x = gethostname()

sendThis = ("Hello Server, my name is Client.  The following are my hostname and IP address:\n"
            "Hostname:  {} ; IP:  {}").format(x, gethostbyname(x))

s.send(sendThis)



resp = s.recv(1024)
print(resp)

