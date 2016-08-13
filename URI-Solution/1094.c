#include<stdio.h>
int main()
{
    int n, amount, i, rabit = 0, rat = 0, frog = 0, total_amount = 0;
    char ch;
    float percentage_rabit, percentage_rat, percentage_frog;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %c", &amount, &ch);
        if(1 <= amount <= 15)
        {
            total_amount = total_amount + amount;
            if(ch == 'C'){
                rabit = rabit+amount;
            }
            else if(ch == 'R'){
                rat = rat + amount;
            }
            else if(ch == 'S'){
                frog = frog + amount;
            }
        }
    }
    printf("Total: %d cobaias\n", total_amount);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", rabit, rat, frog);
    percentage_rabit = (rabit*(1.0/total_amount))*100.0;
    percentage_rat = (rat*(1.0/total_amount))*100.0;
    percentage_frog = (frog*(1.0/total_amount))*100.0;
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", percentage_rabit, percentage_rat, percentage_frog);
    return 0;
}
