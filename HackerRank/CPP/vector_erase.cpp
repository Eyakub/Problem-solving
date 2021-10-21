#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, a, b;
    vector <int> v;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;
        v.push_back(n);
    }

    cin >> x;
    cin >> a >> b;

    v.erase(v.begin()+x);
    v.erase(v.begin()+a-1, v.begin()+b-1);

    cout << v.size() << endl;
    for(auto i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}