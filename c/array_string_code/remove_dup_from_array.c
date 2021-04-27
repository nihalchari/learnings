#include <stdio.h>

int removeDuplicate(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return size;
    }

    int temp[size];

    int j = 0, i = 0;

    for (; i < size - 1; ++i)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size - 1];

    for (i = 0; i < j; ++i)
    {
        arr[i] = temp[i];
    }
    return j;
}

int removeDuplicate1(int *arr, int size)
{
    // size_t size = sizeof(arr) / sizeof(int);
    // printf("size %ld\n", size);
    int index = 0;
    for (int i = 0; i < size; ++i)
    {
        int j = 0;
        for (; j < i; ++j)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (j == i)
        {
            arr[index++] = arr[i];
        }
    }
    for (; index < size; ++index)
    {
        arr[index] = 0;
    }
    // return size;
}

int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(int);
    printf("size in main %d\n", size);

    // int j = removeDuplicate(arr, 10);
    // for (int i = 0; i < j; ++i)
    // {
    //     printf("%d", arr[i]);
    // }

    removeDuplicate1(arr, 10);

    for (int i = 0; i < size; ++i)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}