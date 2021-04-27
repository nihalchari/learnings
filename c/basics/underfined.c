#include <stdio.h>

int main()
{
    float x = 5.5f;
    int *ptr = &x;
    printf("%d\n", *ptr);
}

int main1()
{

    int *ptr = NULL;
    printf("%d\n", *ptr);
    return 0;
}