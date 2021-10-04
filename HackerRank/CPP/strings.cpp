#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int len_a = a.size();
    int len_b = b.size();

    cout << len_a << " " << len_b << endl;

    cout << a + b << endl;

    // swap 
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;

    return 0;
}