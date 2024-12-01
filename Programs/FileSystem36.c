//Assignment 3_2 // if file is present delete that file
#include<stdio.h>

#include<string.h>

#include<fcntl.h>
#include<dirent.h> //readdir
#include<sys/dir.h> // 

int main(int argc, char *argv[])
{
       DIR *dp = NULL;
       struct dirent *entry = NULL;
       char path[50] = {'\0'};

       dp = opendir(argv[1]);
       if(dp == NULL)
       {
              printf("Unable to open the directory\n");
              return -1;
       }
       while((entry = readdir(dp)) != NULL)
       {
              if((strcmp(argv[2],entry->d_name))==0)
              {
                     printf("File is deleted from the directory :\n");
                     
                     sprintf(path,"%s/%s",argv[1],argv[2]);
                     remove(path);
                     break;
              }
       }
       if(entry == NULL)
       {
              printf("There is no such file\n");
              return -1;
       }
       closedir(dp);
       return 0;
}

