#include<iostream>
using namespace std;

int main()
{
    int t;
    long long n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        long long count = 0;
        for(long long m = 1; m < n; m++){
            for(long long k = m+1; k <= n; k++){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
