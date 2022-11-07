#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, l, k;
    scanf("%d", &n);

    int arr[n], arr2[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (j = 0; j < n; j++)
    {
        if (k > j)
        {
            arr2[j] = arr[j + k];
        }
        else
        {
            arr2[j] = arr[j - k];
        }
    }
    for (l = 0; l < n; l++)
    {
        printf("%d ", arr2[l]);
    }
    return 0;
}