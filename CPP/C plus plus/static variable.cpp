/**
    eyakubsorkar@gmail.com
    Daffodil International University
*/
#include<bits/stdc++.h>
using namespace std;

void func(void);

static int countt = 10; ///global variable

int main()
{
    while(countt--){
        func();
    }
    return 0;
}

void func(void){
    static int i = 5;
    i++;
    cout << "I is " << i ;
    cout << " and count is " << countt << endl;
}
