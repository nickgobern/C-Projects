//
// Goal is to make Echo Server from scratch using Beej's Guide
//

//Step 1: Import helper files (standard ones)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

//Step 2: Define global variables

#define PORT "4444"


//Step 3: Define function to handle incoming addresses
void *get_in_adr(struct sockaddr *socket){
    socket->sa_family==AF_INET;

    printf(&socket);

}


int main(void){
    //Step 3: Define function to handle incoming addresses
    int status;
    struct addrinfo hints;
    struct addrinfo *serverinfo;

    memset(&hints,0,sizeof hints);// ensures its empty
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;


                    //Step 4:Create Sockets to listen on, and structures to handle incoming info

                    //Step 5: Loop through all connections and bind to incoming connection

                    //Step 6: Create loop to handle input/Create process for new connection

                    //Step 7: Read input/ output it to screen

                    //Step 8: Close connection

}