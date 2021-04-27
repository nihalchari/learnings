#include <stdio.h>
#include <string.h>

void printDuplicates(char *str)
{
    size_t len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; ++i)
    {
        if (str[i] != '*')
        {
            count = 1;
            for (int j = i + 1; j < len; ++j)
            {
                if (str[j] != '*' && str[i] == str[j])
                {
                    ++count;
                    str[j] = '*';
                }
            }
            if (count > 1)
            {
                printf("%c \n", str[i]);
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter String\n");
    scanf("%[^\n]s", str);
    printDuplicates(str);

    return 0;
}