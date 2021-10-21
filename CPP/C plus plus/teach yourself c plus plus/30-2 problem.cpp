#include<iostream>
using namespace std;
int sum(int a, int b);
int mian(){
    int a, b, c;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    c = sum(a, b);
    cout << "Sum is: " << c;

    return 0;
}
int sum(int a, int b)
{
    return a+b;
}
