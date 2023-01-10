#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // printing space
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // loop to print stars
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            if (i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }
        printf("\n");
    }
    return 0;
}