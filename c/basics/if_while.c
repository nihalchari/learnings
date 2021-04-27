#include <stdio.h>
#include <stdbool.h>

int main()
{
    if (0)
    {
        printf("if 0\n");
    }

    if (-1)
    {
        printf("if -1\n");
    }

    while (0)
    {
        printf("while 0\n");
    }

    while (-1)
    {
        printf("while -1\n");
        break;
    }

    bool status = false;

    if (status)
    {
        printf("true\n");
    }

    if (status == false)
    {
        printf("false\n");
    }
}