#include <stdio.h>

int isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            ++count;
            if (count > 1)
                break;
        }
    }
    if (count > 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("Enter thr range\n");
    int num1 = 0, num2 = 0;
    scanf("%d%d", &num1, &num2);

    for (; num1 <= num2; ++num1)
    {
        if (num1 == 0 || num1 == 1)
        {
            continue;
        }

        if (isPrime(num1))
        {
            printf("%d ", num1);
        }
    }
    printf("\n");
    return 0;
}