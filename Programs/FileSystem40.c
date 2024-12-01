//4_4

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>  

int main(int argc, char *argv[])
{
      int fd = 0, ret = 0;
      char Arr[20];

      fd = open(argv[1],O_RDONLY);
      if(fd == -1)
      {
         printf("Unable to open file\n");
         return -1;
      }

      lseek(fd,atoi(argv[2]),0);

      ret = read(fd,Arr,20);

      printf("Data from file is \n");
      write(1,Arr,ret);

      close(fd);
      return 0;
}

