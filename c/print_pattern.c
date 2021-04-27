#include <stdio.h>

void pattern1()
{
    printf("Enter number of lines\n");
    int lines = 0;
    scanf("%d", &lines);

    for (int i = 1; i <= lines; ++i)
    {
        for (int j = 1; j <= lines - i; ++j)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern2()
{
    printf("Enter number of lines\n");
    int lines = 0;
    scanf("%d", &lines);

    for (int i = 1; i <= lines; ++i)
    {
        for (int j = 1; j <= lines - i; ++j)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern3()
{
    printf("Enter number of lines\n");
    int lines = 0;
    scanf("%d", &lines);

    for (int i = 1; i <= lines; ++i)
    {
        for (int j = 1; j <= lines - i; ++j)
        {
            printf(" ");
        }
        int p = i;
        for (int j = 1; j <= i; ++j)
        {
            printf("%d", p++);
        }
        p = p - 2;
        for (int j = 1; j <= i - 1; ++j)
        {
            printf("%d", p--);
        }

        printf("\n");
    }
}

void pattern4()
{
    printf("Enter number of lines\n");
    int lines = 0;
    scanf("%d", &lines);
    for (int i = 1; i <= lines; ++i)
    {
        for (int i = 0; i < 7; ++i)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern5()
{
    printf("Enter number of lines\n");
    int lines = 0;
    scanf("%d", &lines);

    for (int i = lines; i >= 1; --i)
    {
        if (i == lines || i == 1)
        {
            for (int j = 0; j < 7; ++j)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= 7; ++j)
            {
                if (j != 1 && j != 7)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    pattern5();
}