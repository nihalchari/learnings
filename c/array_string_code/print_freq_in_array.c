#include <stdio.h>

void printFreq(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        int count = 0;
        if (arr[i] != -1)
        {
            count = 1;
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[j] != -1 && arr[i] == arr[j])
                {
                    ++count;
                    arr[j] = -1;
                }
            }
            printf("%d occured for %d times\n", arr[i], count);
        }
    }
}

void printDuplicate(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        int count = 0;
        if (arr[i] != -1)
        {
            count = 1;
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[j] != -1 && arr[i] == arr[j])
                {
                    ++count;
                    arr[j] = -1;
                }
            }
            if (count > 1)
            {
                printf("%d \n", arr[i]);
            }
        }
    }
}

int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // printFreq(arr, 10);
    printDuplicate(arr, 10);
    return 0;
}