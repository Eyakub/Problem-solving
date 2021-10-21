#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++){
        int n, m = 0;
        cin >> n;
        if(n >= 0 && n <= 10){
            cout << m << " " << n << endl;
        }
        else if(n > 10){
            m = n - 10;
            n = 10;
            cout << m << " " << n << endl;
        }
    }
    return 0;
}
