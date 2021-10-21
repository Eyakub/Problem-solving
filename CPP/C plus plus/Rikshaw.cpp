#include <stdio.h>
int main()
{
    int test,i,t,n,rickshaw;
    scanf("%d",&test);
    while(t--){
        scanf("%d",&t);
        int total=0;
        for(i = 1; i<=t; i++){
            scanf("%d",&n);
            total = total + n;
        }
        if(total%2==0){
            rickshaw = total/2;
        }
        else{
            rickshaw = (total/2) + 1;
        }
        printf("%d",rickshaw);
    }
    return 0;
}
