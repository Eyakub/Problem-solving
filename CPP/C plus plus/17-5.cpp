#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter keys, x to stop." << endl;
    do{
        cout << ": ";
        cin >> ch;
        cout << ch << endl;
    }while(ch != 'x');
    return 0;
}
