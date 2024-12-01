//the worst way to call fork system call

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


int main()
{
      fork();

      printf("Hello World\n");

      
      return 0;
}

