//
// Created by ubuntu on 8/2/21.
/*
 * Pointers point to references in memory, like the address.
 *
 */

//
#include <stdio.h>


int main(void){
    int addy = 10;
    int *pointer = NULL;//a pointer is the vaulue is the address of another variable

    printf("the number is %d\n", addy);
    printf("but the address is 0x%x\n",&addy);

    //referencing values through pointers

    pointer = &addy;//this address is that address

    printf("the *pointer value is %d\n",*pointer);

    return 0;

}


