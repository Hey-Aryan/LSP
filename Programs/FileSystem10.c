#include<stdio.h>
#include<fcntl.h> //File Control System

int main(int argc, char *argv[])
{
    int fd = 0;

    printf("Usage : Name_of_Executable | Name_of_File | Mode_of_Open\n");
    if(argc != 2)
    {
        printf("Invalid number of arguments\n");
        return -1;
    }
   

    fd = creat(argv[1],0777);
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }
    else{
        printf("File is successfully created with fd %d\n",fd);
    }

    return 0;
}
