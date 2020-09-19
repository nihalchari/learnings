#include <stdio.h>

struct str
{
    const int i;
    int j;
    const int k;
};

int main()
{
    struct str s = {10, 5, 2};
    s.j = 20;
    printf("%d\n", s.i);
    printf("%d\n", s.j);
    printf("%d\n", s.k);

    return 0;
}