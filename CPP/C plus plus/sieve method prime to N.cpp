#include <bits/stdc++.h>
using namespace std;
void crossout(int b[], int n);
int main()
{
    int n,i;
    printf("Please, input the limit:\n");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
        a[i]=i+1;
    crossout(a, n);
    return 0;
}
void crossout(int b[], int n)
{
    int k,i;
    int m = sqrt(n);
    for(k=2; k<=m; k++)
    {
        if(b[k-1]!=1)
        {
            for(i= 2*k-1; i<n; i += k)
                b[i]=1;
        }
    }
    for(i=0; i<n; i++)
    {
        if(b[i]!=1)
            printf("%d ", b[i]);
    }
    printf("\n");
}
