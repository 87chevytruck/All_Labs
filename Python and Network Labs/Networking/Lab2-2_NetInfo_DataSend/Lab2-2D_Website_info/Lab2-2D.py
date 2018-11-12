""" Ricky Smith, Networking:  Lab 2-2D Client, 21 Sept 2018 """

from socket import *


domainName = raw_input("Type a website (i.e. www.google.com):  ")

webIP = gethostbyname(domainName)

webName = gethostbyaddr(webIP)

print("IP:  {}".format(webIP))
print("=========================")
print("Web Info:  {}".format(webName))


