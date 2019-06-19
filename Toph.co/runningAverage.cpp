#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, arr[100], n;
    float avg, s = 0;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        cin >> arr[i];
        s = s + arr[i];
        avg = s / i;
        cout << avg << endl;
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//         int N,a[100],i;
//         float avg,s=0;
//         scanf("%d",&N);
//         for(i=1;i<=N;i++)
//         {
//                 scanf("%d",&a[i]);
//                 s+=a[i];
//                 avg = s/i;
//                 printf("%.5f\n",avg);
//         }
//         return 0;
// }