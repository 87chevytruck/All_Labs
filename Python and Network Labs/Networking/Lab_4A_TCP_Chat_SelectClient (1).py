#TCP Chat Client
#Does not work on Windows

import socket, select, string, sys
#chat prompt, clears <You> if new message comes in.
def prompt():
    sys.stdout.write('<You> ')
    sys.stdout.flush()

if __name__ == "__main__":

    host = "localhost"
    port = 5000
#Create Socket
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(2)
#Connect to Server
    try:
        s.connect((host, port))
#If error occurs
    except:
        print 'Unable to connect'
        sys.exit()
#Connected successfully
    print 'Connected to remote host. Start sending messages'
    prompt()

    while 1:
        socket_list = [sys.stdin, s] #List of sockets
        #Splitting up sockets in select that are readable, writable, and socketrs with errors.
        read_sockets,write_sockets,error_sockets = select.select((socket_list), [], [])

        for sock in read_sockets: #check list of sockets
            if sock == s: #write out data for data going to my socket(s)
                data = sock.recv(4096)
                if not data : #Disconnected
                    print '\nDisconnected from chat server'
                    sys.exit()
                else : #write data to terminal
                    sys.stdout.write(data)
                    prompt()

            else : #take my entered text and send it to server.
                msg = sys.stdin.readline()
                s.send(msg)
                prompt()
