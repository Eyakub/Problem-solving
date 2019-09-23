#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j, s, r;
	s = n;
	for(i = 1; i <= n ; i++){
		for(j = 1; j < s; j++){
			printf(" ");
		}
		s--;
		r = 2*i-1;
		for(j = 1; j <= r;){
			printf("*");
			j++;
			if(j < r){
				printf(" ");
				j++;	
			}
			
		}
		printf("\n");

	}
	return 0;
}