#include<stdio.h>
int main()
{
    int n, i, smallest;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    for(i = 0; i < n; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("Menor valor: %d\n", smallest);
    for(i = 0; i < n; i++)
    {
        if(a[i] == smallest)
            break;
    }
    printf("Posicao: %d\n", i);
    return 0;
}
