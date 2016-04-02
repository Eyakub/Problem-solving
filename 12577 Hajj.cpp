#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int i = 1;
	char s[20];

	while(true){
		cin >> s;
		if(strcmp(s,"*")==0)
            break;

		cout << "Case " << i << ": ";
		i++;
		if(strcmp(s,"Hajj")==0)
            cout <<"Hajj-e-Akbar\n";
		else if(strcmp(s,"Umrah")==0)
            cout <<"Hajj-e-Asghar\n";
	}
	return 0;
}
