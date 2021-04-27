#include <stdio.h>

int remove_element(int *arr, int size, int num)
{
    int j = 0;
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] != num)
        {
            arr[j++] = arr[i];
        }
    }
    count = size - j;
    for (; j < size; ++j)
    {
        arr[j] = 0;
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 1, 3, 2, 3, 4, 6, 3, 3};
    int size = sizeof(arr) / sizeof(int);
    int elementsRemoved = remove_element(arr, size, 3);
    int it = size - elementsRemoved;
    for (int i = 0; i < it; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}