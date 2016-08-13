#include <stdio.h>
int main()
{
    int i, n, j;
    scanf("%d", &n);
    if(n % 2 == 0){
        for(i = n + 1; i <= n+11; i+=2){
            printf("%d\n", i);
        }
    }
    else if(n % 2 != 0){
        for(i = n + 2; i <= n+12; i+=2){
            printf("%d\n", i);
        }
    }
    return 0;
}
