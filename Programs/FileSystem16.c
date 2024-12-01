//stat command into system call
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h> // structure is declared here and object is |
//                                                               /
//                                                             /
int main(int argc,char *argv[])//                            /
{//                                                        /
    struct stat sobj;  //structure ch object  - - - - - - -

    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }

    stat(argv[1],&sobj);
    printf("File name is : %s\n",argv[1]);
    printf("File size is : %d\n",sobj.st_size);
    printf("Number of lnks : %d\n",sobj.st_nlink);
    printf("Inode number : %d\n",sobj.st_ino);
    printf("File System number : %d\n",sobj.st_dev);
    printf("Number of blocks : %d\n",sobj.st_blocks);



    return 0;
}


