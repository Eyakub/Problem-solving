#include <stdio.h>
int main()
{
	int a, b, n, i;
        scanf("%d %d", &a, &b);
        if (a > b) {
            n = 0;
            for (i = a -1; i > b; i--) {
                if (i % 2 != 0) {
                    n = n + i;
                }
            }
            printf("%d\n", n);
        }
        else {
            n = 0;
            for (i = b - 1; i > a; i--) {
                if (i % 2 != 0) {
                    n = n + i;
                }
            }
            printf("%d\n", n);
        }
	return 0;
}

