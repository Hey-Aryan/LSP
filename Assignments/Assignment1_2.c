// Write a program which acepts file name, mode of file and then open that file in specific mode 
#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    char Fname[20];
    int Mode = 0, fd = 0;

    printf("Usage: Executable Name | Name of File | Mode of File |\n");
    if(argc!=3)
    {
        printf("Invalid Arguments\n");
        return -1;
    }

    if(argv[2] == "write")
    {
        Mode = O_WRONLY;
    }
    
    fd = open(argv[1],Mode);
    printf("File is Successfully Opened in %d Mode with FD: %d\n",Mode,fd);
    return 0;
}