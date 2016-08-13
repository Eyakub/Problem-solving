#include <stdio.h>
int main()
{
	int i, n,even = 0, odd = 0, positive = 0, negative = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (n % 2 == 0) {
			even++;
		}
		if (n % 2 != 0) {
			odd++;
		}
		if (n < 0) {
			negative++;
		}
		if (n > 0) {
			positive++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
	return 0;
}

