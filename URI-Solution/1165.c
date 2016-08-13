#include <stdio.h>
int main()
{
    int n, prime,p,j , i;
    scanf("%d", &p);
    for(j=1;j<=p;j++){
        prime = 1;
        scanf("%d", &n);
        for(i = 2 ; i < n; i++){
            if(n % i != 0){
                continue;
            }
            else
                prime = 0;
            break;
        }
        if(prime == 1){
            printf("%d eh primo\n", n);
        }
        else{
            printf("%d nao eh primo\n", n);
        }
    }
    return 0;
}
