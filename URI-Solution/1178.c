#include<stdio.h>]
int main()
{
    int n[100], i;
    double x;
    scanf("%lf", &x);
    for(i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, x);
        x = x / 2;
    }
    return 0;
}
