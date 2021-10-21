#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++){
        int n, m;
        cin >> n >> m;
        if(n >= 0 && n <= 10 && m >= 0 && m <= 10){
            int sum;
            sum = n + m;
            cout <<"Case " << i << ": " << sum << endl;
        }
    }
    return 0;
}
