 #include <iostream>
#include <algorithm>
using namespace std;
string s;
char map[10001][1001];
main() {
	cout<<"Enter Text: ";
	cin>>s;
	string ss = s;
	s.erase (s.begin());
	reverse (s.begin(),s.end());
	s += ss;
	int len = s.length();
	
	for (int i=0;i<=len/2;i++) {
		map[i][len/2-i] = s[i];
		map[i][len/2+i] = s[i];
	}
	
	for (int i=len/2+1;i<len;i++) {
		map[i][i-len/2] = s[i];
		map[i][len-i+len/2-1] = s[i];
	}
	
	for (int i=0;i<len;i++) {
		for (int j=0;j<len;j++) {
			cout<<map[i][j];
		}
		cout<<endl;
	}
}
