#include <stdio.h>

int main()
{
    char arr[] = {0, 1, 2, 3, 4, 5, 6, 7};

    int *iptr = (int *)arr;
    char *cptr = arr;

    ++iptr;
    ++cptr;

    // printf("%d\n", *cptr);
    printf("%d\n", 0x07060504);
    printf("%d\n", *iptr);

    int x = 0x00000001;
    char ch = x;

    if (ch)
    {
        printf("Big\n");
    }
    else
    {
        printf("Small\n");
    }
}