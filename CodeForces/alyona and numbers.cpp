#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long int n, m;
	int total = 0;
	scanf("%lld%lld", &n, &m);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if((i + j) % 5 == 0){
				total++;
			}
		}
	}
	printf("%d\n", total);
	return 0;
}
