#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> V;
    int n, num;
    cin>>n;

    for(int i=0; i<n; i++){
        scanf("%d",&num);
        vector<int>::iterator iV= lower_bound(V.begin(),V.end(),num);
        if(V.end()==iV){
            V.push_back(num);
        }
        else{
            V[iV - V.begin()] = num;
        }
    }
    printf("Lis = %d\n",V.size());
}
