///variable scope

#include<iostream>
using namespace std;



int main()
{
    int a  = 5;
    cout<<a<<endl;
//    ///cout<<b<<endl; ///b pore declare tai kaj korbe na,
//    int b = 6;
//    cout<<b<<endl;
    {
        int b = 6;
        cout<<b<<endl; ///scope er moddhe tai kaj korbe
    }
    cout<<b<<endl; ///kaj korbe na cause block er baire b..

    return 0;
}
