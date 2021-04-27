#include <stdio.h>
#include <stdlib.h>

// void print_common_elements(int *arr1, int size1, int *arr2, int size2)
// {
// }

void print_unique(int *arr1, int sizea1, int *arr2, int sizea2)
{
    int *arr = (int *)malloc((sizea1 * 4) + (sizea2 * 4));
    int k = 0;
    int ch = 0;
    for (int i = 0; i < sizea1; ++i)
    {
        ch = arr1[i];
        if (arr1[i] != -1)
        {
            arr[k++] = arr1[i];
            for (int j = i + 1; j < sizea1; ++j)
            {
                if (ch == arr1[j])
                {
                    arr1[j] = -1;
                }
            }
            for (int j = 0; j < sizea2; ++j)
            {
                if (ch == arr2[j])
                {
                    arr2[j] = -1;
                }
            }
        }
    }
    for (int i = 0; i < sizea2; ++i)
    {
        if (arr2[i] != -1)
        {
            arr[k++] = arr2[i];
        }
    }

    for (int i = 0; i < k; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_non_repeating(int *a1, int s1, int *a2, int s2)
{
    int ch = 0;

    for (int i = 0; i < s1; ++i)
    {
        ch = a1[i];
        if (a1[i] != -1)
        {
            for (int j = i + 1; j < s1; ++j)
            {
                if (ch == a1[j])
                {
                    a1[j] = -1;
                    a1[i] = -1;
                }
            }
        }

        for (int j = 0; j < s2; ++j)
        {
            if (a2[j] != -1)
            {
                if (ch == a2[j])
                {
                    a2[j] = -1;
                    a1[i] = -1;
                }
            }
        }
    }

    for (int i = 0; i < s1; ++i)
    {
        if (a1[i] != -1)
        {
            printf("%d ", a1[i]);
        }
        if (a2[i] != -1)
        {
            printf("%d ", a2[i]);
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int sizea1 = sizeof(arr1) / sizeof(int);
    int sizea2 = sizeof(arr2) / sizeof(int);

    print_unique(arr1, sizea1, arr2, sizea2);

    print_non_repeating(arr1, sizea1, arr2, sizea2);

    return 0;
}