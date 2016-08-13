#include <stdio.h>
int main()
{
    float A,B,C,n;
    scanf("%f%f%f", &A,&B,&C);
    n=((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n", n);
    return 0;
}
