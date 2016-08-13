#include<stdio.h>
int main()
{
    int n[20], x[20], i, j;
    for(i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }
    for(i = 0, j = 19; i < 20; i++, j--){
        x[j] = n[i];
    }
    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, x[i]);
    }
    return 0;
}
