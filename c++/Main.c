#include <stdio.h>
// #include "my_header.h"
#include <stdbool.h>

int main()
{
    int input;
    printf("Hello World C\n");
    scanf("%d", &input);
    printf("input = %d\n", input);

    int x = 4;
    x <<= 1;
    printf("x = %d\n", x);

    return 0;

    // char ch;
    // __CHAR16_TYPE__ char16;;
    // __CHAR32_TYPE__ char32;
    // // no wchar_t in c
    //  __uint64_t uint64;

    bool status = true;
    if (status)
    {
        printf("status is %d\n", status);
    }
}
