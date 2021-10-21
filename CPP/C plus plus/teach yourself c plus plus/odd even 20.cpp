#include<iostream>
using namespace std;
int main()
{
    int num;
    while(1){
        cout << "Enter number to be tested.\n";
        cin >> num;
        if(num == 0)
            cout << "This number is non negative.\n\n";
        else if(num % 2 == 0)
            cout << "The number is Even.\n\n";
        else
            cout << "The number is odd.\n\n";
    }
    return 0;
}
//fuck /*what is this */
///comment system valid
