//
// Going over System calls
//http://codewiki.wikidot.com/c:system-calls:open all system calls for open
#include <stdio.h>
#include <unistd.h> //has wrapper for all system calls
#include <fcntl.h> //contains all control functions

int main(void){

    int openfile;

    openfile = open("outputss.txt",O_RDONLY | O_CREAT
    );

    if (openfile < 0){
        fprintf(stderr, "File not found");
        return -1;
    }

    else{
        printf("File opened");
        return 0;
    }

}
