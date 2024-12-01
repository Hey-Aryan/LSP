// how the data session is not shared 

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int No = 10; //Global variable 

void fun() //fun function is part of text session 
{
      No ++;

      printf("Running process PID is %d and value of no is %d\n",getpid(),No);
}

int main()
{
      int Ret = 0;
      Ret = fork();

      if(Ret == 0)
      {
            fun();
      }
      else
      {
            fun();
      }
      
      return 0;
}

