#include <stdio.h>
int main()
{
	int x, y;
	float v;
	scanf("%d%d", &x, &y);
	if (x == 1){
        v = 4.00*y;
		printf("Total: R$ %.2f\n", v);
	}
	else if (x == 2){
	    v = 4.50*y;
		printf("Total: R$ %.2f\n", v);
	}
	else if (x == 3){
	    v = 5.00*y;
		printf("Total: R$ %.2f\n", v);
	}
	else if (x == 4){
	    v = 2.00*y;
		printf("Total: R$ %.2f\n", v);
	}
	else{
	    v = 1.50*y;
		printf("Total: R$ %.2f\n", v);
	}
	return 0;
}
