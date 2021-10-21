#include<iostream>
#include<ctype.h>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    string str, s;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        s = toupper(str[i]);
        cout << s;-
    }
    cout << endl;
    return 0;
}
