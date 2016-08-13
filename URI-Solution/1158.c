#include<stdio.h>
int main()
{
    int test, x, y, i, j, sum, k;
    scanf("%d", &test);
    for(i = 1; i <= test; i++){
        scanf("%d%d", &x, &y);
        if(x % 2 != 0){
            sum = 0;
            for(j = x, k = 1; k <= y; k++, j+=2){
                sum = sum + j;
            }
            printf("%d\n", sum);
        }
        else{
            sum = 0;
            for(j = x+1, k = 1; k <= y; k++, j+=2){
                sum = sum + j;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
