//
// Structures allow you to combine data items of different kinds
//
#include <stdio.h>
#include <string.h>

struct Books{
    char title[15];

    int version;
}Book;

//how to reference pointers with structers
void printBooks(struct Books *basicBook); //assigns value normal way in main

void printBooks(struct Books *pointerBook){ //assigns values through pointers
    printf("Title: %s\n", pointerBook->title);
    printf("Version: %d\n", pointerBook->version);
}


int main(){

    struct Books Books1;
    struct Books pointerBooks;
    Books1.version = 6495407;
    strcpy(Books1.title, "Harry Potter");
    printBooks(&Books1);
    strcpy(pointerBooks.title, "Harry Pointer");
    pointerBooks.version = 12;
    printBooks(&pointerBooks);

return 0;

}