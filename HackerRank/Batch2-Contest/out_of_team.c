#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k, i, count = 0, inp;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &inp);
        if (inp < k)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}
