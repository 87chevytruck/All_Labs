# TCP Chat Server
#Does not work on Windows

import socket, select
#Broadcast all text sent to server to all connected clients
def broadcast_data(sock, message):
    for socket in CONNECTION_LIST:
        #Don't send data to my IP or source IP
        if socket != server_socket and socket != sock:
            try:
                socket.send(message)
            except: #error occurred
                socket.close()
                CONNECTION_LIST.remove(socket)

if __name__ == "__main__":
    #List of connected sockets
    CONNECTION_LIST = []
    RECV_BUFFER = 4096
    PORT = 5000

    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind(("127.0.0.1", PORT)) #Bind to localhost, and port.
    server_socket.listen(10) #Allow up to 10 awaiting connections

    CONNECTION_LIST.append(server_socket) #Add server socket to list of available connection

    print "Chat server started on port " + str(PORT) #Success

    while 1:
        #Splitting up sockets in select that are readable, writable, and socketrs with errors.
        read_sockets,write_sockets,error_sockets = select.select((CONNECTION_LIST), [], [])

        for sock in read_sockets:
            if sock == server_socket: #New client trying to connect
                sockfd, addr = server_socket.accept() #Split tuple
                CONNECTION_LIST.append(sockfd) #Add socket file descriptor to connection list
                print "Client (%s, %s) connected" % addr #New client connection

                broadcast_data(sockfd, "[%s:%s] entered room\n" % addr) #Send new client to all connected clients

            else: #New data or something other than a new connection
                try:
                    data = sock.recv(RECV_BUFFER) #receive the data
                    if data:
                        broadcast_data(sock, "\r" + '<' + str(sock.getpeername()) + '> ' + data) #Send out new data to all clients

                except: #If client(s) disconnect, broadcast to the chat, close the socket, and remove them from connection list.
                    broadcast_data(sock, "Client (%s, %s) is offline" % addr)
                    print "Client (%s, %s) is offline" % addr
                    sock.close()
                    CONNECTION_LIST.remove(sock)
                    continue
    server_socket.close()
