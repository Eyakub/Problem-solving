#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t, x, i;
    scanf("%d", &t);
    int arr[t];

    for (i = 0; i < t; i++)
    {
        int min = 0;
        scanf("%d%*c", &x);

        if (x < 60)
        {
            min += min + (60 - x) + 40 + 60;
        }
        else if (x < 80)
        {
            min += min + ((80 - x) * 2) + 60;
        }
        else if (x < 100)
        {
            min += min + (100 - x) * 3;
        }
        printf("%d minutes\n", min);
    }
    return 0;
}
