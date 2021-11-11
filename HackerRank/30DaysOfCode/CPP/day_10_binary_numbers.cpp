#include <bits/stdc++.h>
using namespace std;


int consecutive_max(vector <string> s){
    int count = 0, result = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == "0"){
            count = 0;
        } else {
            count++;
            result = max(result, count);
        }
    }
    return result;
}

int binary_number(int n){
    int reminder;
    vector <string> s;
    while (n > 0){
        reminder = n % 2;
        n = n / 2;
        s.push_back(to_string(reminder));
    }
    return consecutive_max(s);
}

int main(){
    int n;
    cin >> n;
    cout << binary_number(n) << endl;
    return 0;
}