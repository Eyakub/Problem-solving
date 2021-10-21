#include<iostream>
using namespace std;

int add(int a, int b)
{
    int sum;
    sum  =a+b;
    return sum;
}

int main()
{
    int a, b;
    a =5, b = 6;
    cout<<add(a,b)<<endl;
    {
        int k = 5; ///K er use ei scope er baire kora jabe na
        cout<<k<<endl;
    }
    float k = 5.6; ///again k nite parlam cz scope ses hole variable vanish hoye jay
                    ///previous k vanish
    cout<<k<<endl;


    for( i = 0; i <= 5; i++){ ///i for er jnne local, onno kothao use hobe na i mean onno scope e
        cout<<i<<" ";
    }
    cout<<i<<endl; ///i last scope e ses, tai kaj korbe na, ei i use korte ekta for er upor i declare korte hobe+

    return 0;
}
