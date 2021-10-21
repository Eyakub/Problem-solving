#include<iostream>
using namespace std;
int leap(int n);

int main()
{
    int n;
    while(1){
        cin >> n;
        leap(n);
    }
    return 0;
}

int leap(int n)
{
    if(n % 400 == 0 || (n % 100 != 0 && n % 4 == 0)){
        cout << n << " is leap year.\n";
    }
    else{
        cout << n << " is not leap year.\n";
    }
    return n;
}
