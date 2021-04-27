#include <stdio.h>

int main()
{
    // for (int i = 0; i < 5; ++i)
    // {
    //     if (i == 1)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", i);

    //     if (i == 4)
    //     {
    //         break;
    //     }
    // }
    int i = 0;
    while (i <= 5)
    {
        if (i == 1)
        {
            ++i;
            continue;
        }
        printf("%d\n", i);

        if (i == 4)
        {
            break;
        }
        ++i;
    }
}