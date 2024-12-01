#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h> // for dynamic linking // dlopen // dlsym // dl =dynamic linking 

int main()
{
    void *ptr = NULL;
    void(*fptr)(); // to catch display function

    ptr = dlopen("library.so",RTLD_LAZY); // paramter (.so file name, flag ) flag = if ram has so file then dont call new file 
    if(ptr == NULL)
    {
        printf("Unable to load library\n");
    }

    fptr = dlsym(ptr,"Display");
    if(fptr == NULL)
    {
        printf("Unable to load the address of function\n");
        return -1;
    }
    fptr();
    return 0;   
}

//gcc -rdynamic -o Myexe client.c
//./Myexe