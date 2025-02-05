#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#define FILEPATH "./demo.txt"
#define NUMINTS  (10)
#define FILESIZE (NUMINTS * sizeof(int))

int main(int argc, char *argv[])
{
    int i;
    int fd;
    int *map;  /* mmapped array of int's */

    fd = open(FILEPATH, O_RDONLY);

    map = mmap(0, FILESIZE, PROT_READ, MAP_SHARED, fd, 0);
    
    /* Read the file int-by-int from the mmap
     */
    for (i = 1; i <=NUMINTS; ++i) {
	printf("%d: %d\n", i, map[i]);
    }

    if (munmap(map, FILESIZE) == -1) {
	perror("Error un-mmapping the file");
    }
    close(fd);
    return 0;
}

// Mapping is done in potential gap
// Fastest way of accessing the contents 
// After Mapping immediately unmap 