#include<stdio.h>
int arr[1000];
int main()
{
    int t, i;
    scanf("%d", &t);
    int x = 0;
    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, x);
        x++;
        if(x == t){
            x = 0;
        }
    }
    return 0;
}
