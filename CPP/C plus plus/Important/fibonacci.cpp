#include <stdio.h>
int main()
{
    long long i = 0, j = 1, current, k, n;
    printf ("How many numbers: \n");
    scanf ("%lld", &n);
    for (k = 0; k<n; k++){
        printf("%d ", i);
        current = i+j;
        i = j;
        j = current;
    }
    return 0;
}
