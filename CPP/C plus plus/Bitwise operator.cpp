#include<bits/stdc++.h>
#define nl cout << endl;
using namespace std;

int main()
{
    unsinged int a = 60;
    unsinged int b = 13;

    int c = 0;

    c = a & b;      ///12 = 0000 1100
    cout <<"C = a&b is: " << c;
    nl

    c = a | b;      ///61 = 0011 1101
    cout << "C = a | b is: " << c;
    nl

    c = a ^ b;      ///49 = 0011 0001
    cout << "C = a ^ b is: " << c;
    nl

    c = ~a;         ///-61 = 1100 0011
    cout << "C = ~a is: " << c;
    nl

    c = a << 2;     ///240 = 1111 0000
    cout << "C = a << 2 is: " << c;
    nl

    c = a >> 2;     ///15 = 0000 1111
    cout << "C = a >> 2 is: " << c;
    nl

    return 0;
}
