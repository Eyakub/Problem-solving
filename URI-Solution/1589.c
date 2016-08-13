#include<stdio.h>
int main()
{
    int n, r1, r2, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &r1, &r2);
        if(n >= 0){
            printf("%d\n", r1+r2);
        }
    }
    return 0;
}
