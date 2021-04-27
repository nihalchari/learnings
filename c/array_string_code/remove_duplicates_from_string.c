#include <stdio.h>
#include <string.h>

void removeDuplicate(char *str)
{
    int index = 0;
    int len = strlen(str);
    for (int i = 0; i <= len; ++i)
    {
        int j = 0;
        for (; j < i; ++j)
        {
            if (str[i] == str[j])
                break;
        }

        if (j == i)
        {
            str[index++] = str[i];
        }
    }
}

int main()
{
    char str[100];
    printf("Enter String\n");
    scanf("%[^\n]s", str);
    removeDuplicate(str);
    printf("%s\n", str);
    return 0;
}