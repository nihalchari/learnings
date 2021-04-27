#include <stdio.h>

int main()
{
    int *iptr;
    char *cptr;

    char carr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cptr = carr;
    iptr = (int *)carr;

    ++cptr;
    ++iptr;

    printf("%p\n", cptr);
    printf("%p\n", iptr);

    printf("%d\n", *cptr);
    printf("%d\n", *iptr);
    printf("%d\n", 0x07060504);
    printf("%d\n", 0x01234567);
}
