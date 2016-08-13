#include <stdio.h>
#include <math.h>
int main()
{
	int time, hour = 0, minute = 0;
	scanf("%d", &time);
	if (time >= 3600) {
		hour = time / 3600;
		time = time - (hour * 3600);
	}
	if (time >= 60) {
		minute = time / 60;
		time -= (minute * 60);
	}
	printf("%d:%d:%d\n", hour, minute, time);
	return 0;
}
