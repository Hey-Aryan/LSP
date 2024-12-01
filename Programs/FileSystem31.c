// create file
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

   fd = creat(argv[1],0777);
   {
        printf("File is successfully created with fd : %d\n",fd);
   }
    
    return 0;
}

//if you create a existing file with data , data is truncated and inode number is same 8197010
//8197010

// so to avoid this open file if not then create new 