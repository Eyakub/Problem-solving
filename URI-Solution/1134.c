#include<stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    while(1)
    {
        scanf("%d", &n);
        if(n == 1){
            sum1++;
        }

        if(n == 2){
            sum2++;
        }

        if(n == 3){
            sum3++;
        }
        if(n == 4)
            break;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", sum1, sum2, sum3);
    return 0;
}
