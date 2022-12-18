#include <stdio.h>

void ascendingSort(int *array, int n)
{
    int a, i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}

void descendingSort(int *array, int n)
{
    int a, i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (array[i] < array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int arr1[n], arr2[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (j = 0; j < n; j++)
    {
        scanf("%d", &arr2[j]);
    }

    ascendingSort(arr1, n);
    descendingSort(arr2, n);

    for (k = 0; k < n; k++)
    {
        printf("%d ", arr1[k] - arr2[k]);
    }

    return 0;
}