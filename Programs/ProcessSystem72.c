#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


void * ThreadProc1(void *ptr)
{
    printf("Inside Thread 1\n");
    pthread_exit(NULL); 
}

void * ThreadProc2(void *ptr)
{
    printf("Inside Thread 2\n");
    pthread_exit(NULL); 
}

int main()
{
     pthread_t TID1, TID2;
     int ret1 = 0, ret2 = 0;

     ret1 = pthread_create(&TID1,      
                          NULL,      
                          ThreadProc1,  
                          NULL);     
     if(ret1 != 0) 
     {
          printf("Unable to create thread 1\n");
          return -1;
     }
     printf("Thread  1 is created wit ID : %d\n",TID1);
     pthread_join(TID1,NULL); 

     ret2 = pthread_create(&TID2,      
                          NULL,      
                          ThreadProc2,  
                          NULL);     
     if(ret2 != 0) 
     {
          printf("Unable to create thread 2\n");
          return -1;
     }
     printf("Thread  2 is created wit ID : %d\n",TID2);
     pthread_join(TID2,NULL); 

     printf("End of main thread\n");
     pthread_exit(NULL);
     
     return 0;
}

 