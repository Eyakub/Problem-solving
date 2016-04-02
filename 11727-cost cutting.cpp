#include<iostream>
using namespace std;

int main()
{
    int a, b, c, test;
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        cin >> a >> b >> c;
        if((a > b && a < c) || (a > c && a < b))
        {
            cout << "Case " << i << ": " << a << endl;
        }
        if((b > a && b < c) || (b > c && b < a))
        {
            cout << "Case " << i << ": " << b << endl;
        }
        if((c > a && c < b) || (c < a && c > b))
        {
            cout << "Case " << i << ": " << c << endl;
        }
    }
    return 0;
}
