#include <stdio.h>

int find_index(int *array, int num)
{
    int i, index_no = -1;
    for (i = 0; i < sizeof(array); i++)
    {
        if (num == array[i])
        {
            index_no = i + 1;
            break;
        }
    }
    return index_no;
}

int main()
{
    int t, i, j, find_value, arr_len, index_no;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &arr_len);
        int arr[arr_len];
        for (j = 0; j < arr_len; j++)
            scanf("%d", &arr[j]);
        scanf("%d", &find_value);

        index_no = find_index(arr, find_value);
        if (index_no == -1)
            printf("Case %d: Not Found\n", i + 1);
        else
            printf("Case %d: %d\n", i + 1, index_no);
    }
    return 0;
}