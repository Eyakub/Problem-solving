#include<stdio.h>
int main()
{
    unsigned long long a, b, c, arr[60];
    int n, j, i, T;
    a = 0, b = 1;
    scanf("%d", &n);
    for(i = 0; i < 61; i++){
        arr[i] = a;
        c = a + b;
        a = b;
        b = c;
    }
    for(j = 0; j < n; j++){
        scanf("%d", &T);
        printf("Fib(%d) = %lld\n",T, arr[T]);
    }
    return 0;
}
