// create file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
       int mode = 0;
       if(argc != 3)
       {
              printf("Insufficient arguments\n");
              return -1;
       }

       if(strcmp(argv[2],"read") == 0)
       {
              mode = R_OK;
       }
       else if (strcmp(argv[2],"execute") == 0)
       {
              mode = X_OK;
       }

       if(access(argv[1],mode)<0) // return value 0 & -1
       {
              printf("Unable to sccess %s file in %s mode\n",argv[1],argv[2]);
       }
       else{
              printf("You can access %s file in %s mode \n",argv[1],argv[2]);
       }
       
       return 0;
}

