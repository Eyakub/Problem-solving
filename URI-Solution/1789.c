#include<stdio.h>
int main()
{
	int n, i, test, max = 0;
	while(scanf("%d", &test) != EOF){
		for(i = 0, max = 0; i < test; i++){
			//max = 0;
			scanf("%d", &n);
			if(n > max){
				max = n;
			}
		}
		if(max < 10){
			printf("1\n");
		}else if(max < 20){
			printf("2\n");
		}else{
			printf("3\n");
		}
	}

	return 0;
}
