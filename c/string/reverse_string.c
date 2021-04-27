#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWord(char *s)
{
    char *startPos = s;
    char *temp = s;

    while (*temp)
    {
        ++temp;
        if (*temp == ' ')
        {
            reverse(startPos, temp - 1);
            startPos = temp + 1;
        }
        else if (*temp == '\0')
        {
            reverse(startPos, temp - 1);
        }
    }
    // reverse(s, temp - 1);
}

void printReverseNotAlteringActualArg(char *arr)
{
    int len = strlen(arr);
    char *temp = (char *)malloc(len + 1);
    strcpy(temp, arr);
    int i = len - 1;

    for (; i >= 0; --i)
    {
        if (temp[i] == ' ')
        {
            temp[i] = '\0';
            printf("%s ", temp + i + 1);
        }
    }
    printf("%s", temp);
}

void printReverse1(char *arr)
{
    int len = strlen(arr);

    int i = len - 1;

    for (; i >= 0; --i)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '\0';
            printf("%s ", &arr[i] + 1);
        }
    }
    printf("%s", arr);
}

void printUsingCharArray1(char *arr)
{
    int len = strlen(arr);
    char buff[10];
    char carr[5][10];

    int beginword = 0;
    int i = 0;
    int j = 0;
    while (arr[i])
    {
        ++i;
        if (arr[i] == ' ')
        {
            memcpy(buff, arr + beginword, i - beginword);
            buff[i - beginword] = '\0';
            strcpy(carr[j], buff);

            beginword = i + 1;
            ++j;
        }
    }
    if (arr[i] == '\0')
    {
        memcpy(buff, arr + beginword, i - beginword);
        buff[i - beginword] = '\0';
        strcpy(carr[j], buff);
    }

    for (int i = 4; i >= 0; --i)
    {
        printf("%s ", carr[i]);
    }
}

void printUsingCharArray(char *arr)
{
    int len = strlen(arr);
    char buff[10];
    char carr[5][10];

    int beginword = 0;
    int i = 0;
    int j = 0;
    while (arr[i])
    {
        ++i;
        if (arr[i] == ' ')
        {
            strncpy(buff, arr + beginword, i - beginword);
            buff[i - beginword] = '\0';
            strcpy(carr[j], buff);
            beginword = i + 1;
            ++j;
        }
    }
    if (arr[i] == '\0')
    {
        strncpy(buff, arr + beginword, i - beginword);
        buff[i - beginword] = '\0';
        strcpy(carr[j], buff);
    }

    for (int i = 4; i >= 0; --i)
    {
        printf("%s ", carr[i]);
    }
}

void printUsingCharPtr(char *arr)
{
    int len = strlen(arr);
    char buff[10];
    char *carr[5];

    int beginword = 0;
    int i = 0;
    int j = 0;
    while (arr[i])
    {
        ++i;
        if (arr[i] == ' ')
        {
            memcpy(buff, arr + beginword, i - beginword);
            strcpy(carr[j], buff);
            buff[i - beginword] = '\0';
            // printf("%s", buff);
            beginword = i + 1;
            ++j;
        }
    }
    if (arr[i] == '\0')
    {
        memcpy(buff, arr + beginword, i - beginword);
        strcpy(carr[j], buff);
        buff[i - beginword] = '\0';
    }

    for (int i = 4; i >= 0; --i)
    {
        printf("%s ", carr[i]);
    }
}

void printReverse(char *arr)
{
    int len = strlen(arr);
    int start = 0;
    int end = len - 1;

    for (int i = end; i >= 0; --i)
    {
        if (arr[i] == ' ' || i == 0)
        {
            if (i != 0)
            {
                start = i + 1;
            }
            else
            {
                start = 0;
            }

            for (int j = start; j <= end; ++j)
            {
                printf("%c", arr[j]);
            }
            printf(" ");
            end = i - 1;
        }
    }
}

int main()
{
    char carr[] = {"My name is Nihal Chari"};
    // reverseWord(carr);

    // printReverse(carr);
    // printUsingCharArray(carr);
    // printf("%s", carr);

    printReverse(carr);
}