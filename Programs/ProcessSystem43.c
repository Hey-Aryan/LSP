//4_4

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


int main()
{
      int PID = 0;
      int PPID = 0;
      PID = getpid();
      printf("PID of Running Process is : %d\n",PID);

      PPID = getppid();
      printf("PPID of Parent Process is : %d\n",PPID); //terminal 
      
      return 0;
}

