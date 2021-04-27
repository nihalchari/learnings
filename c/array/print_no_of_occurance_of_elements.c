#include <stdio.h>

void no_of_occurance(int *arr, int size)
{
    int count = 0;
    int ch = 0;
    for (int i = 0; i < size; ++i)
    {
        ch = arr[i];
        while (arr[i] != -1)
        {
            count = 0;
            for (int j = i; j < size; ++j)
            {
                if (ch == arr[j])
                {
                    arr[j] = -1;
                    ++count;
                }
            }
            printf("%d has %d occurance\n", ch, count);
        }
    }
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int size = sizeof(arr) / sizeof(int);
    no_of_occurance(arr, size);
    return 0;
}