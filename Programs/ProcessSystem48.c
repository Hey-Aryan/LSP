// how the text session is shared 

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

void fun() //fun function is part of text session 
{
      printf("Running process PID is %d :\n",getpid());
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

