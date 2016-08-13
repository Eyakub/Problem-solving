#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i+=2){
        printf("%d\n", i);
    }
    return 0;
}
/** both are same
#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}
*/
