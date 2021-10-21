#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Enter number of row" << endl;
	int row, k = 0;
	cin >> row;
	for(int i = 1; i <= row; i++, k = 0){
		for(int space = 1; space <= row-1; space++){
			cout << " ";
		}
		while(k != 2*i - 1){
			cout << "* ";
			k++;
		}
		cout << endl;
	}
}
