#include<iostream>
#include<cstdio>
using namespace std;
int arr[2000];
int main()
{
	int n, h, countt = 0;
	scanf("%d%d", &n, &h);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > h){
			countt = countt+2;
		}
		if(arr[i] <= h){
			countt++;
		}
	}
	printf("%d\n", countt);
	return 0;
}
