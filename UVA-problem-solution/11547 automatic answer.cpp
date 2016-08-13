#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        n = n * 567;
        n = n / 9;
        n = n + 7492;
        n = n * 235;
        n = n / 47;
        n = n - 498;
        n = n / 10;
        n = n % 10;
        n = abs(n);
        cout << n << endl;
    }
    return 0;
}
