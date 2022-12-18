#include <stdio.h>

int main()
{
    int n, s;
    scanf("%d %d", &n, &s);

    int res = (s - n) / 2;
    printf("%d\n", res);
    return 0;
}