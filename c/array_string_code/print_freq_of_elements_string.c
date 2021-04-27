#include <stdio.h>
#include <string.h>

void printFreq(char *str)
{
    char freq[75];
    for (int i = 0; i < 75; ++i)
    {
        freq[i] = '\0';
    }
    size_t len = strlen(str);

    for (int i = 0; i < len; ++i)
    {
        ++freq[str[i] - '0'];
    }

    for (int i = 0; i < 75; ++i)
    {
        if ((freq[str[i] - '0']) != '\0')
        {
            printf("%c occured %d times\n", str[i], freq[str[i] - '0']);
            freq[str[i] - '0'] = '\0';
        }
    }
}

void printFreq1(char *str)
{
    char freq[26] = {0};
    size_t len = strlen(str);

    for (int i = 0; i < len; ++i)
    {
        ++freq[str[i] - 'a'];
    }

    for (int i = 0; i < 26; ++i)
    {
        if ((freq[str[i] - 'a']) != 0)
        {
            printf("%c occured %d times\n", str[i], freq[str[i] - 'a']);
            freq[str[i] - 'a'] = 0;
        }
    }
}

void printFreq3(char *str)
{
    size_t len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; ++i)
    {
        if ('*' == str[i])
            ++count;
    }
    if (count > 0)
    {
        printf("%c occured for %d times\n", '*', count);
    }
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
            printf("%c occured for %d times\n", str[i], count);
        }
    }
}

int main()
{
    char str[100];
    printf("Enter String\n");
    scanf("%[^\n]s", str);
    printFreq3(str);

    return 0;
}