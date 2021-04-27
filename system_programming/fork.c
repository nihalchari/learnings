#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    int x = 1;
    pid_t id;

    switch (id = fork())
    {
    case -1:
        perror("");
        return -1;

    case 0:
        printf("child : x=%d\n", ++x);
        break;

    default:
        printf("parent : x=%d\n", --x);
    }

    return 0;
}