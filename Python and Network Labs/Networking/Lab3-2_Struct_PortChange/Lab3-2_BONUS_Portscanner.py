""" Ricky Smith, Networking:  Lab 3-2 BONUS Port Scanner, 25 Sept 2018 """

from socket import *
import subprocess
import sys

addy = "192.168.31.133"

try:
    # sets range of ports to be scanned, creates and closes socket each itteration
    for port in range(1,1025):
        s = socket(AF_INET, SOCK_STREAM)
        result = s.connect_ex((addy, port))

        # print statement for visibility of exact error code returned (troubleshooting)
        ## print("Port: {} connect_ex code: {}".format(port, result))
        
        # prints only when an open port is found
        if result == 0:
            print("Port: {} is OPEN on {}".format(port, addy))

        # else statement for troubleshooting only
        ## else:
        ##    print("Port: {} is CLOSED on {}".format(port, addy))

        s.close()

except KeyboardInterrupt:
    print("Ah Ah Ah, you didn't say the magic word.  (you pressed Ctrl+C)")
    sys.exit()

print("\nScan on {} is now complete.".format(addy))
