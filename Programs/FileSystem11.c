#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main(int argc,char *argv[])
{
    int fd = 0;
    char Buffer[20] = {'\0'};
    int Ret = 0;
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

    Ret = read(fd,Buffer,10); //fd, address of empty buffer, no. of bytes you want to read
    if(Ret == 0)
    {
        printf("Unable to read data from files\n");
        return -1;

    }

    printf("Data from file is : %s/n",Buffer);

    return 0;

}
