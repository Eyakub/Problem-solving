#include<stdio.h>
int main()
{
    int n = 1, i, j, x;
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d ", n);
            n++;
        }
        n = n+1;
        printf("PUM\n");
    }
    return 0;
}
