#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    vector <int> v;
    for (int i = 0; i < t; i++){
        cin >> n;
        v.push_back(n);
    }
    
    reverse(v.begin(), v.end());
    for(auto i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}