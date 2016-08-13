#include <stdio.h>
int main()
{
    float a, b, per;
    scanf("%f", &a);
    if(a <= 400.00){
        per = a * (15.0/100.0);
        printf("Novo salario: %.2f\n", a+per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 15 %%\n");
    }
    else if(a <= 800.00){
        per = a * (12.0/100.0);
        printf("Novo salario: %.2f\n", a+per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 12 %%\n");
    }
    else if(a <= 1200.00){
        per = a * (10.0/100.0);
        printf("Novo salario: %.2f\n", a+per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 10 %%\n");
    }
    else if(a <= 2000.00){
        per = a * (7.0/100.0);
        printf("Novo salario: %.2f\n", a+per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 7 %%\n");
    }
    else if(a > 2000.00){
        per = (a*4.0) / 100.0;
        printf("Novo salario: %.2f\n", a+per);
        printf("Reajuste ganho: %.2f\n", per);
        printf("Em percentual: 4 %%\n");
    }
    return 0;

}
