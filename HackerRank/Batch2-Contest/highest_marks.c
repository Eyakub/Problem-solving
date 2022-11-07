#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, i, j, n, highest = 0;
    scanf("%d", &t);
    int x[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d", &x[i]);
        if (i == 0)
        {
            highest = x[i];
        }
        else
        {
            if (x[i] > highest)
            {
                highest = x[i];
            }
        }
    }

    for (j = 0; j < t; j++)
    {
        printf("%d ", highest - x[j]);
    }

    return 0;
}
