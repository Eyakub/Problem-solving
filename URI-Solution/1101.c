#include <stdio.h>
int main()
{
    int m, n, temp, sum, i, j;
    while(scanf("%d %d", &m, &n) == 2){
        if(m <= 0 || n <= 0){
            break;
        }
        else if(n > m){
            temp = m;
            m = n;
            n = temp;
        }
        sum = 0;
        for(i = n; i <= m; i++){
            printf("%d ", i);
            sum = sum + i;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
