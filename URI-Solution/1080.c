#include<stdio.h>
int main()
{
    int n, i, pos, h = 0;
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n > h){
            h = n;
            pos = i;
        }
    }
    printf("%d\n%d\n", h, pos);
    return 0;
}
