#include <stdio.h>
int main()
{
	int n, hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0;
	scanf("%d", &n);
	printf("%d\n", n);
	if (n >= 100) {
		hundred = n / 100;
		n = n - (hundred * 100);
	}
	if (n >= 50) {
		fifty = n / 50;
		n = n - (fifty * 50);
	}
	if (n >= 20) {
		twenty = n / 20;
		n = n - (twenty * 20);
	}
	if (n >= 10) {
		ten = n / 10;
		n = n - (ten * 10);
	}
	if (n >= 5) {
		five = n / 5;
		n = n - (five * 5);
	}
	if (n >= 2) {
		two = n / 2;
		n = n - (two * 2);
	}
	printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", hundred, fifty, twenty, ten, five, two, n);
	return 0;
}
