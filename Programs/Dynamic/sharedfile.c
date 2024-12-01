#include<stdio.h>
#include"sharedfile.h" // whyy double quote is explained in ppa

void Display()
{
    printf("Jay Ganesh...\n");
}

// to create .o file
//gcc -c -fPIC sharedfile.c

//to create .so file
// gcc -shared -o library.so sharedfile.o