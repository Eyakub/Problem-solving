#include <stdio.h>
int main()
{
    int N[10], V, i;
    scanf("%d", &V);
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, V);
        V = V*2;
    }
    return 0;
}
