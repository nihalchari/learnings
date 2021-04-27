#include <stdio.h>

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = num % 10;

    sum += sumOfDigits(num / 10);
    printf("%d+", num % 10);
    return sum;
}

int sumOfDigitWithoutRecursion(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    printf("Enter num\n");
    int num = 0;
    scanf("%d", &num);
    // printf("\b = %d\n", sumOfDigits(num));
    printf("%d\n", sumOfDigitWithoutRecursion(num));
    return 0;
}