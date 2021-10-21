#include<iostream>
using namespace std;

int main()
{
    int flag = 0;
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0, j = n-1; i < n/2; i++, j--){
        if(s[i] != s[j]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "Not palindrome\n";
    }
    else if(flag == 0)
        cout << "Palindrome\n";
    return 0;
}
