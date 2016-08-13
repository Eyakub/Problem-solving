#include<stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    if(a <= 2000.00){
        printf("Isento\n");
    }
    else if(a <= 3000.00){
        printf("R$ %.2f\n",(a - 2000.0) * 0.08);
    }
    else if(a <= 4500.00){
        printf("R$ %.2f\n", 1000.0 * 0.08 + (a - 3000.0) * 0.18);
    }
    else if(a > 4500.00){
        printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + (a - 4500.0) * 0.28);
    }
    return 0;
}
