#include"sharedfile.h"

int Addition(int no1, int no2)
{
    int iAns = 0;
    iAns = no1 + no2;
    return iAns;
}

//convert .c to .o
// gcc -c sharedfile.c -o sharedfile.o
// -c means fakat compiler kar ani thamb 

// convert .o to .a
// ar rcs sharedfile.a sharedfile.o
// rcs = runtime compile 
// sharedfile.a = to khacha box jo chikatlaye


