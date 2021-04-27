#include <stdio.h>

int main()
{
    char *ptr = "Hello World\n";
    // printf("%c", ptr);
    // printf("%lu \n", sizeof(ptr));
    // printf("%lu \n", sizeof(*ptr));

    for (int i = 0; i < 13; ++i)
    {
        printf("%c    :    %p\n", ptr[i], (ptr + i));
    }

    char arr[] = "Hello World\n";
    for (int i = 0; i < 13; ++i)
    {
        printf("%c    :    %p\n", arr[i], (arr + i));
    }
    // printf("%lu \n", sizeof(arr));
    // printf("%lu \n", sizeof(*arr));

    // printf("%c", "software"[4]);

    return 0;
}
