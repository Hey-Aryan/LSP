// Pahila thread kam kartana dusra thread resource madhe gustoye 
// Problem
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

int Counter = 0;   //global variable // resource

void * ThreadProc(void *ptr)
{
     int i = 0;
     Counter++;
     printf("Thread executed with Counter :%d\n",Counter);
     for(i=0;i< 0xFFFFFFFF; i++); //0xFFFFFFFF = largest interger value
     printf("Thread completed with counter : %d\n",Counter);
     pthread_exit(NULL);
}

int main()
{
     pthread_t TID1, TID2;
     int ret = 0;

     ret = pthread_create(&TID1,        
                          NULL,       
                          ThreadProc, 
                          NULL);      
     if(ret != 0) 
     {
          printf("Unable to create thread 1\n");
          return -1;
     }

     ret = pthread_create(&TID2,        
                          NULL,       
                          ThreadProc, 
                          NULL);      
     if(ret != 0) 
     {
          printf("Unable to create thread 2\n");
          return -1;
     }

     pthread_join(TID1,NULL);
     pthread_join(TID2,NULL);

     printf(" End of main Thread  ");
     
     return 0;
}

 