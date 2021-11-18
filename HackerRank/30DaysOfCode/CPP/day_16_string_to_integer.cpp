#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    try {
        int num = stoi(s);
        cout << num << endl;
    } catch(...){
        cout << "Bad String" << endl;
    }
}