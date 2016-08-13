#include<iostream>
using namespace std;

int main()
{
    int a, b, t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> a >> b;
        if(a > b){
            cout << ">" << endl;
        }
        else if(a < b){
            cout << "<" << endl;
        }
        else if( a == b){
            cout << "=" << endl;
        }
    }
    return 0;
}
