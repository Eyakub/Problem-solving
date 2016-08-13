#include <stdio.h>
int main()
{
    int n, i, sum;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        sum = 0;
        for(i = n; i < n+10; i++){
            if(i % 2 == 0){
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
