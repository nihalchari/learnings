#include <stdio.h>
#include <string.h>
int main()
{
    char arr[5][10] = {"white", "red", "grqen", "yellow", "blue"};

    // printf("%c\n", arr[2][2]);
    // printf("%c\n", *(*(arr + 2) + 2));
    char temp[10];

    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", arr[i]);
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}