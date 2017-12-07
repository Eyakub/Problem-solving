#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test, n;
	cin >> test;
	for(int i = 0; i < test; i++){
		string name;
		cin >> name >> n;
		cin.ignore();
		
		if(!name.compare("Thor")){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	return 0;
}
