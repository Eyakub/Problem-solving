#include<iostream>
using namespace std;

int main()
{
    int n, m, test;
    cin >> test;
    for(int i = 0; i < test; i++)
    {
        cin >> n >> m;
        cout << (n/3)*(m/3) << endl;
    }
    return 0;
}
