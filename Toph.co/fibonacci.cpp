#include <stdio.h>
#include<math.h>
int main()
{
    int ara[50], i, n;
    scanf("%d", &n);
    ara[0] = 1;
    ara[1] = 1;
    for(i = 2; i < n; i++) {
        ara[i] = ara[i - 1] + ara[i - 2];
        }
        printf("%d", ara[n - 1]);

}