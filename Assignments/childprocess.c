#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    printf("Inside child process -PID of parent processs is %d\n", getppid());

    return 0;
}