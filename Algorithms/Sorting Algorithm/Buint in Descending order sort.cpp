#include<iostream>
#include<algorithm>
#define max 100000
using namespace std;

int main()
{
	int n, arr[max];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n, greater<int>());
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
