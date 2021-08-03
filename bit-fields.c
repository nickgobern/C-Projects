//
// bit field manipulation | controlling the size of variables
//
#include <stdio.h>
#include <string.h>


//simple structure
struct {
    unsigned int bingo;
    unsigned int bongo;
}size1;

struct {
    unsigned int bingo : 8;
    unsigned int bongo : 4;
}size2;

int main(){


    printf("Memory of size1 is %d bits\n",sizeof(size1));

    size2.bingo = 6; //statically assigning th size
    printf("Memory of size2 is %d bits\n",sizeof(size2));
    printf("Value of bingo is %d\n", size2.bingo);
    return 0;
}

