#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Enter the no of rows" << endl;
	int row;
	cin >> row;
	int space = row - 1;
	
	for(int k = 1; k <= row; k++){
		for(int c = 1; c <= space; c++){
			cout << " ";
		}
		space--;
		
		for(int c = 1; c <= 2*k-1; c++){
			cout << "*";
		}
		cout << endl;
	}
	
	//backword now
	space = 1;
	for(int k = 1; k <= row-1; k++){
		for(int c = 1; c <= space; c++){
			cout << " ";
		}
		space++;
		
		for(int c = 1; c <= 2 * (row-k) - 1; c++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
