#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


int main()
{
      int Ret = 0;
      int PID = 0;

      Ret = fork();

      if (Ret == 0) //child
      {
            printf("Child process is running\n");
            printf("Child says : PID of parent process is : %d\n",getppid());
            printf("Child says : PID of child process is : %d\n",getpid());

      }
      else //parent 
      {
            printf("Parent process is running\n");
            printf("Parent says : PID of child processs is : %d\n",Ret);
            printf("Parent says : PID of parent process is : %d\n",getpid());
            printf("Parent says : PID of parent process 0f parent i.e Terminal is : %d\n",getppid());
      }

      
      return 0;
}

