//
/* referencing memory management function
    *calloc(x,y) : allocates an array of x elements with size y
    free(*addy)  : releases block of memory from address
    *malloc(num) : allocates x amount of bytes and leaves them uninitialized
    ralloc(*addy,new-size) : reallocates memory up to new-size
 */
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocate(){
    char name[100];
    char *description;

    strcpy(name,"Jimmy");

    //allocate memory dynamically and error check
    description = malloc(30 * sizeof(char ));

    if(description == NULL){
        fprintf(stderr,"Whoopsie!!\n");
    }
    else{
        strcpy(description,"hot boi");
    }

    printf( "Name is %s\n", name);
    printf( "Description is %s\n", description);
}


int main(){

    allocate();

    return 0;
}