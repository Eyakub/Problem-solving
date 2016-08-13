#include <stdio.h>
int main()
{
	int days, year = 0, month = 0;
	scanf("%d", &days);
	if (days >= 365) {
		year = days/365;
		days = days - (year * 365);
	}
	if (days >= 30) {
		month = days/30;
		days = days - (month * 30);
	}
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);
	return 0;
}
