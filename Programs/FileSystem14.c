//to take file name from user and read whole file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define BLOCKSIZE 1024 //Macro

int main(int argc,char *argv[])
{
    int fd = 0;
    int Ret = 0;
    char Buffer[BLOCKSIZE];
    

    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }

    fd = open(argv[1], O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((Ret = read(fd,Buffer,sizeof(Buffer))) != 0)  // this loop which read the data in form on 1kb "Badali ani mug"
    {
        write(1,Buffer,Ret);
    }
    close(fd); 
    
    return 0;
}
