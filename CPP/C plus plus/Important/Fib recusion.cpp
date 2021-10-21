#include <stdio.h>
long long fibo(long long n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main ()
{
    long long n, i;
    printf ("How many numbers: \n");
    scanf ("%lld", &n);
    for (i = 0; i<n; i++)
        printf ("%lld ", fibo(i));
    return 0;
}
