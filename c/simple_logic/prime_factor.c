#include <stdio.h>

// void primeFactors(int num)
// {
//     int temp = num;
//     for (int i = 2; i <= num / 2; ++i)
//     {
//         while (temp % i == 0)
//         {
//             temp /= i;
//             printf("%d\n", i);
//         }
//     }
// }

void primeFactors(int num)
{
    int i = 2;
    if (num == 1)
        return;
    while (num % i != 0)
    {
        ++i;
    }
    printf("%d ", i);
    primeFactors(num / i);
}

int main()
{
    printf("Enter num\n");
    int num = 0;
    scanf("%d", &num);
    primeFactors(num);
    return 0;
}