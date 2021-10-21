#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		for(int row = 1; row <= x; row++){
			
			for(int space = x-row; space >= 1; space--){
				cout << " ";
			}
			
			for(int star = 1; star <= row*2-1; star++){
				cout << "*";
				
			}
			
			cout << endl;
		}
	//	cout << endl;
	}
	return 0;
}
