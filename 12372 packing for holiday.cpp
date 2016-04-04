#include<iostream>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> a >> b >> c;
        if(a <= 20 && b <= 20 && c <= 20){
            cout << "Case " << i << ": " << "good" << endl;
        }
        else
            cout << "Case " << i << ": " << "bad" << endl;
    }
    return 0;
}
