//to impliment cp command (copy Command)

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h> //memset
#include<unistd.h>

#define BLOCKSIZE 1024 //Macro

int main(int argc,char *argv[])
{
    int fdSource = 0;
    int fdDest = 0;
    int Ret = 0;

    char Buffer[1024] = {'\0'};

    if(argc != 3) //FIlter
    {
        printf("Insufficient arguments\n");
        return -1;
    }

    fdSource = open(argv[1], O_RDONLY);
    if(fdSource == -1)
    {
        printf("Unable to open  source file\n");
        return -1;
    }

    fdDest = creat(argv[2],0777);
    if(fdDest == -1)
    {
        printf("Unable to create destination file\n");
        close(fdSource);
        return -1;
    }

    while((Ret = read(fdSource,Buffer,sizeof(Buffer)))!= 0)
    {
        write(fdDest,Buffer,Ret);
        memset(Buffer,0,sizeof(Buffer)); //address of memory, 
    }
    close(fdSource);
    close(fdDest);
    return 0;
}
