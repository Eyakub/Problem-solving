#include <stdio.h>
int main()
{
	int a, b, c, d, i, j;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	i = c + d;
	j = a + b;
	if (b > c && d > a && d > 0 && i > j && a % 2 == 0) {
		printf("Valores aceitos\n");
	}
	else {
		printf("Valores nao aceitos\n");
	}
	return 0;
}
