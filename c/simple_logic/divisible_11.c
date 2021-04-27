#include <stdio.h>

void isDivisibleby11(int num)
{
    int sum1 = 0;
    int sum2 = 0;

    while (num)
    {
        sum1 += num % 10;
        num /= 10;
        sum2 += num % 10;
        num /= 10;
    }
    int diff = (sum1 > sum2) ? sum1 - sum2 : sum2 - sum1;

    if ((diff == 0) || (diff % 11 == 0))
    {
        printf("is divisible by 11\n");
    }
    else
    {
        printf(" is not divisible by 11\n");
    }
}

int main()
{
    printf("Enter num\n");
    int num = 0;
    scanf("%d", &num);
    isDivisibleby11(num);
    return 0;
}