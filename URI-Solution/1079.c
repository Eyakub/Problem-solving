#include<stdio.h>
int main()
{
    int n, i;
    float a, b, c, avg;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f %f %f", &a, &b, &c);
        avg = ((a*2)+(b*3)+(c*5))/10.0;
        printf("%.1f\n", avg);
    }
    return 0;
}
