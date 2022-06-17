#include<iostream>
#include<cstdio>
using namespace std;
int part(int a[], int p, int r);
int quicksort(int a[],int p,int r){
    if(p<r){
        int q = part(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}

int part(int a[], int p, int r){
    int x = a[r];
    int i = p-1;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i++;
            int temp =a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int tem =a[i+1];
    a[i+1] = a[r];
    a[r] = tem;

    return (i+1);
}

int main()
{
    int a[100000];
    int n, t;
    cin >> t; ///test case
    cin >> n; ///how many number you wanna sort
    for(int i = 0; i < t; i++){
        for(int k =0;k<n;k++){
            cin>>a[k];
        }
        quicksort(a, 0 , n-1);

        for(int k =0;k<n;k++){
            cout << a[k] <<" ";
        }
    }

    return 0;
}
