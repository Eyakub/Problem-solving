#include <stdio.h>
long long fact(long long n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main ()
{
    long long n, i;
    printf ("Enter the number: \n");
    scanf ("%lld", &n);
    printf ("%lld", fact(n));
    return 0;
}
