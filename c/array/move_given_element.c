#include <stdio.h>

void move_element_at_end(int *arr, int size, int num)
{
    int j = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] != num)
        {
            arr[j++] = arr[i];
        }
    }
    for (; j < size; ++j)
    {
        arr[j] = num;
    }
}

void move_element_at_front(int *arr, int size, int num)
{
    int j = size - 1;
    for (int i = size - 1; i >= 0; --i)
    {
        if (arr[i] != num)
        {
            arr[j--] = arr[i];
        }
    }
    for (; j >= 0; --j)
    {
        arr[j] = num;
    }
}

int main()
{
    int arr[] = {1, 2, 1, 3, 2, 3, 4, 6, 3, 3};
    int size = sizeof(arr) / sizeof(int);
    move_element_at_end(arr, size, 3);
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    move_element_at_front(arr, size, 3);
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}