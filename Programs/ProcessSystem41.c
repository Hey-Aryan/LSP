//4_4

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


int main()
{
      int PID = 0;
      PID = getpid();

      printf("PID of Running Process is : %d\n",PID);
     

      return 0;
}

