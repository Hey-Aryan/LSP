//Demonstration of MultiProcessing 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int ret1 = 0, ret2 = 0;

   ret1 = fork();
   if(ret == 0)
   {
        execl("./Process1","NULL",NULL); //64
   }

   ret2 = fork();
   if(ret == 0)
   {
        execl("./Process2","NULL",NULL); //65
   }
    return 0;
}

 