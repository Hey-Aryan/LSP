#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    char File1[] = "File.c";
    char File2[] = "Demo.txt";
    int fd1, fd2 = 0;
    char Buffer[1024];  
    int Ret = 0;

   
    fd1 = open(File1, O_RDONLY);
    if(fd1 == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    fd2 = open(File2, O_RDWR); //Open the file in read and write 
    if (fd2 == -1) 
    {
        printf("Error opening destination file");
        close(fd1);
        return -1;
    }

    while((Ret = read(fd1,Buffer,sizeof(Buffer))) != 0)  // this loop which read the data in form on  1kb 
    {
        write(fd2,Buffer,Ret);
    }
    printf("Bytes read : %d\n",Ret);

    close(fd1);
    close(fd2);

    printf("File copied successfully!\n");

    return 0;

}
