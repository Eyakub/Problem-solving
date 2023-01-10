#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x));
int dp[1002][102];
int Weight[1002],Cost[1002];
int cap,n;
int call(int i,int w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1;
    if(w+Weight[i]<=cap)profit1=Cost[i]+call(i+1,w+Weight[i]);
    else profit1=0;
    int profit2=call(i+1,w);
    int ret=max(profit1,profit2);
    return dp[i][w]=ret;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)cin>>Cost[i]>>Weight[i];

        int q,ans=0;
        cin>>q;
        while(q--) {
            mem(dp,-1);
            cin>>cap;
            int ret=call(1,0);
            ans+=ret;
        }
        cout<<ans<<endl;
    }
    return 0;
}
