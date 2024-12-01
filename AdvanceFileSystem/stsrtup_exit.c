//Program to demostrate startup and exit using #pragma.
#include<stdio.h>
#include<stdlib.h>

#pragma startup fun

#pragma exit sun
void fun();
void sun() ;


void fun()
{
    printf("\nIn fun");
    exit(0);
}

void sun()
{
printf("\nIn sun");
}



int main()
{
printf("\nIn main");
return 0;
}

