#include<stdio.h>
#include<fcntl.h> //File Control System

int main(int argc, char *argv[])
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY); //Open System Call which returns int which is captured int fd
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return-1;
    }
    else 
    {
        printf("File is successfully opened with FD %d \n",fd);
    }
    return 0;
}

//O_RDONLY   Read mode
//O_RDWR     Read + Write mode
//O_WRONLY   Write mode
//O_CREATE   Create mode