// open file if not create new
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
   int fd = 0;

   if(argc != 2)
   {
    printf("Invalid arguments\n");
    return -1;
   }

   fd = open(argv[1],O_RDWR | O_CREAT);
   if(fd != -1)
   {
        printf("File is successfully created with fd : %d\n",fd);
   }
    
    return 0;
}