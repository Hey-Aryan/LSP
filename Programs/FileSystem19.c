// ls -i 
// to open directory and display all the file name with their inode number
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h> //directory entry  

//https://man7.org/linux/man-pages/man3/readdir.3.html

int main(int argc,char *argv[]){
    DIR *dp = NULL;
    struct dirent * entry = NULL;
     if(argc != 2)
     {
          printf("Insufficient arguments\n");
          return -1;
     }
    dp = opendir(argv[1]);
    if(dp == NULL)
    {
          printf("Unable to open directory\n");
          return -1;
    }

    printf("---------------------------------------\n");
    printf("Entries from directory file are :\n");
    printf("---------------------------------------\n");
    printf("\t File Name\tInode Number\n");

    while ((entry = readdir(dp))!= NULL)
    {
     printf("%20s : %d\n",entry->d_name,entry->d_ino);// dirent navaacha structure cha object yetoye
    }
     printf("---------------------------------------\n");


    closedir(dp);

    return 0;
}


