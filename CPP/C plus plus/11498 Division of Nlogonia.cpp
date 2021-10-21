#include<iostream>
using namespace std;

int main()
{
    int test, n, m, x, y;
    cin >> test;
    while(test != 0){
        cin >> n >> m;
        while(test--){
            cin >> x >> y;
            if(x == n || y == m){
                cout << "divisa\n";
            }
            else if(x < n && y < m){
                cout << "NE\n";
            }
            else if(x > n && y > m){
                cout << "NO\n";
            }
        }
    }
}
