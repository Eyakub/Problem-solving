#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10], n;
	for(int i = 0; i <= 9; i++){
		cin >> arr[i];
	}
	for(int i = 0; i <= 9; i++){
		if(arr[i] >= 70)
			cout << "A\n";
		else if(arr[i] >= 70 && arr[i] <= 79)
			cout << "B\n";
		else if(arr[i] >= 60 && arr[i] <= 69)
			cout << "C\n";
		else if(arr[i] >= 50 && arr[i] <= 59)
			cout << "D\n";
		else
			cout << "Fail\n";
	}
	return 0;
	
}
