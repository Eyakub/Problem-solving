#include<iostream>
using namespace std;
int main()
{
    int i;
    float f;
    char a[80];

    cout << "Enter an integer, float, and string: ";
    cin >> i >> f >> a;
    cout << "Here's your data: "<< endl ;
    cout << i << ' ' << f << ' ' << a << endl;

    return 0;
}
