#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    double l,m,n,k,sum=0,count=0;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m;
        sum+=m;

        cout<<sum/i<<endl;
    }
    return 0;
}