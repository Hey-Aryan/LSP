#include <stdio.h>
#include <unistd.h>

// both the functions are used to allocate memeory dynamically 
int main()
{
    long int page_size = sysconf(_SC_PAGESIZE);
    printf("My page size: %ld\n", page_size);  // 16kb page size

    void* c1 = sbrk(0); // sbrk (Bytes) will return address of heap from start i.e. zero
    printf("program break address: %p\n", c1);
    printf("sizeof char: %lu\n", sizeof(char));

    c1 = (void*) ((char*) c1 + 1); 
    printf("c1: %p\n", c1);

    brk(c1); // accepts address of memeory till where you want to break the memeory 
    void* c2 = sbrk(0);

    printf("program break address: %p\n", c2); 
    return 0;
}


// malloc calls brk only and free also calls brk 
// malloc calls to break above the zero line 
// free calls brk to break down again the same memeory which would deallocate the heap memory 

// Refer screnshots 1 and 2 