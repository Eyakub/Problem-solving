#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int s, a, b, c, fourth;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        fourth = s - (a + b + c);
        printf("%d", fourth);
    }
    return 0;
}
