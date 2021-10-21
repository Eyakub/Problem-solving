#include <bits/stdc++.h>
using namespace std;

// void cmp(int a, int b){
//     return a < b;
// }


int main(){
    int t, n;
    vector <int> v;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> n;
        v.push_back(n);
    }

    // sort(v.begin(), v.end(), greater<int>());
    sort(v.begin(), v.end());
    for(auto i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}