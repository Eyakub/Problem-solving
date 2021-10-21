#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        long long n;
        cin >> n;
        vector<long long> m(1000000);
        m[0] = 1;
        int save = 6;
        long long sum = 1, ans = 0;
        for(int j = 1; j < n; j++){
            m[j] = (j*6) + m[j - 1];
        }
        cout << "Case " << i << ": " << m[n-1] << " ";
        for(int k = 0; k < n; k++){
            sum = sum + m[k];
        }
        cout << sum << endl;
    }
    return 0;
}
