#include <stdio.h>
#include <stdlib.h>

char *fun()
{
    char *ptr = (char *)malloc(5);
    // return ptr;

    char ch;
    return &ch;
}

int main()
{

    char *ptr;
    ptr = fun();
    *ptr = 'A';
    printf("%p\n", ptr);
    printf("%c\n", *ptr);
    // free(ptr);
    return 0;
}
