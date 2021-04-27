#include <stdio.h>

void convert(int num, int base)
{
    if (num == 0)
    {
        return;
    }

    int rem = num % base;
    convert(num / base, base);
    if (rem < 10)
    {
        printf("%d", rem);
    }
    else
    {
        printf("%c", rem - 10 + 'A');
    }
}

void convert_without_recursion(int num, int base)
{
    int arr[10] = {};
    int i = 0;
    while (num)
    {
        arr[i++] = num % base;
        num = num / base;
    }
    for (--i; i >= 0; --i)
    {
        if (arr[i] < 10)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf("%c", arr[i] - 10 + 'A');
        }
    }
}

int main()
{
    printf("Enter Num and Base\n");
    int num = 0, base = 0;
    scanf("%d%d", &num, &base);
    // convert(num, 16);
    convert_without_recursion(num, base);
    printf("\n");
    return 0;
}