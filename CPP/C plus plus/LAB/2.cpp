#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i = 13; i <= 100; i+=3){
        sum = sum + i;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}
