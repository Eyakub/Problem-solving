#include<stdio.h>
int main()
{
    float A[100];
    float n;
    int i;
    for(i = 0; i < 100; i++){
        scanf("%f", &n);
        A[i] = n;
        if(A[i] <= 10.0){
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }
    return 0;
}
/**
int main()
{
    float n;
    int i, arr[100];
    for(i = 0; i < 100; i++){
        scanf("%f", &n);
        if(n <= 10){
            printf("A[%d] = %.1f\n", i, n);
        }
        else
            continue;
    }
    return 0;
}
*/
