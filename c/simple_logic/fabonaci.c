#include <stdio.h>

int feb(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return (feb(num - 1) + feb(num - 2));
}

int main()
{
    printf("Enter number of terms\n");
    int terms;
    scanf("%d", &terms);

    for (int i = 0; i < terms; ++i)
    {
        printf("%d ", feb(i));
    }
    printf("\n");
    return 0;
}