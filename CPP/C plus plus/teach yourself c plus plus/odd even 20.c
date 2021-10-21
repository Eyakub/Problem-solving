#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number to be tested.\n";
    cin >> num;
    if(num % 2 == 0)
        cout << "The number is Even.\n";
    else
        cout << "The number is odd.\n";
    return 0;
}
