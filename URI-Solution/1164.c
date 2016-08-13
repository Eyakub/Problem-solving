#include<stdio.h>
int main()
{
    int n, x, sum, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = 0;
        scanf("%d", &x);
        for(j = 1; j < x; j++){
            if(x % j == 0){
                sum = sum + j;
            }
        }
        if(sum == x){
            printf("%d eh perfeito\n", x);
        }
        else{
            printf("%d nao eh perfeito\n", x);
        }
    }
    return 0;
}
