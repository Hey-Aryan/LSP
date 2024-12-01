#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int Ret = 0;

    Ret = fork();

    if(Ret == 0)  // Child  
    {
        execl("./childprocess","Demo","Hello","Marvellous",NULL);
    }
    else        // Parent
    {
        printf("Parent is running with PID : %d\n",getpid());
        while(1)
        {}
    }
    return 0;
}