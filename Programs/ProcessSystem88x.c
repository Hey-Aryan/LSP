#include<stdio.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
    char Filename1[30], Filename2[30];
    int Ret = 0;
    printf("Enter the existing file name : \n");
    scanf("%s",Filename1);

    printf("Enter the name for hardlink : \n");
    scanf("%s",Filename1);

    Ret = link(Filename1, Filename2);

    if(Ret == 0)
    {
        printf("Hardlink gets creaated succesfully...\n");
    }
    return 0;

}