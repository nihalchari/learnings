#include <stdio.h>

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = num % 10;

    sum += sumOfDigits(num / 10);
    return sum;
}
void isDivisibleby9(int num)
{
    if (sumOfDigits(num) % 9 == 0)
    {
        printf("%d is divisible by 9\n", num);
    }
    else
    {
        printf("%d is not divisible by 9\n", num);
    }
}

int main()
{
    printf("Enter num\n");
    int num = 0;
    scanf("%d", &num);
    isDivisibleby9(num);
    return 0;
}