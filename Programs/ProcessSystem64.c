#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Buffer[512];
    int iCnt = 0;
    int iRet = 0, i = 0;

    fd = open("demo.txt",O_RDONLY);
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
     printf("Total no. of Characters Present : %d\n",iRet);
    {
        for(i=0; i<iRet ; i++)
        {
            if((Buffer[i]>='a') &&(Buffer[i]<='z'))
            {
                printf("%d\n",iCnt);
                iCnt++;
            }
        }
    }
    printf("Number of small characters are : %d\n",iCnt);
    close(fd);
    return 0;
}