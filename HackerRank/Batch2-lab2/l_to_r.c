#include <stdio.h>

int main()
{
    int t, i, j, k, l, r;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &l, &r);
        for (j = l; j <= r; j++)
        {
            int is_prime = 1;
            for (k = 2; k < j; k++)
            {
                if (j % k == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}