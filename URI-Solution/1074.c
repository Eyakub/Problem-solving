#include <stdio.h>
int main()
{
    int n,x,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==0){
            printf("NULL\n");
        }

        if(x>0){
            if(x%2==0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }

        if(x<0){
            if(x%2!=0){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("EVEN NEGATIVE\n");
            }
        }

    }
    return 0;
}
/**
#include <stdio.h>
int main()
{
    int n, N, i;
    printf("How many times\n");
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &n);
        if(n > 0 && n % 2 == 0){
            printf("EVEN POSITIVE\n");
        }
        else if(n > 0 && n % 2 != 0){
            printf("ODD POSITIVE\n");
        }
        else if(n < 0 && n % 2 == 0){
            printf("EVEN NEGATIVE\n");
        }
        else if(n < 0 && n % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
        else if(n == 0){
            printf("NULL\n");
        }
    }
    return 0;
}
*/
