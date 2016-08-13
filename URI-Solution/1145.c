#include<stdio.h>
int main()
{
    int x, y, i, j, n = 1;
    scanf("%d %d", &x, &y);
    for(i = 1; i <= y/x; i++){
        for(j = 1; j <= x; j++){
            if(j < x){
                printf("%d ", n);
                n++;
            }
            else if(j == x){
                printf("%d\n", n);
                n++;
            }
        }
    }
    return 0;
}
