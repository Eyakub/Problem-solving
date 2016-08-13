#include<stdio.h>
int main()
{
    int i, j, n = 7;
    for(i = 1; i <= 9; i+=2){
        j = n;
        while(j >= (n-2)){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        n = n+2;
    }
    return 0;
}
