//Problem
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

//prototype
// void * ______(void * _____)
//{}
void * ThreadProc(void *ptr)
{
    int i = 0;

    for(i =1; i<=100; i++)
    {
          printf("Thread with counter : %d\n",i);
    }
}

int main()
{
     pthread_t TID;
     int ret = 0;

     ret = pthread_create(&TID,        // Address of pthread_attr_t structure object 
                          NULL,        //Thread attributes
                          ThreadProc,  // Address of callback function
                          NULL);       // Parameter to callback function
     if(ret != 0) 
     {
          printf("Unable to create thread\n");
          return -1;
     }
     printf("Thread is created wit ID : %d\n",TID);

     printf("End of main thread\n");

     return 0;
}

 