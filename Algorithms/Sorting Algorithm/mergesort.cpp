#include<iostream>
#include<cstdio>
using namespace std;
int mergesort(int a[],int p,int q,int r);
int merge(int a[], int p, int r){
    if(p<r){
        int q = (p+r)/2;
        merge(a, p, q);
        merge(a, q+1,r);
        mergesort(a, p, q,r);
    }
    return 0;
}

int mergesort(int a[],int p,int q,int r){
    int n1 = q - p +1;
    int n2 = r - q;
    int L[1000], R[1000],i,j;

    for(i=0;i<n1;i++){
        L[i] = a[p+i];
    }

    for(j=0;j<n2;j++){
        R[j] = a[q+j+1];
    }
    L[n1]=9999;
    R[n2]=9999;

    i = 0;
    j = 0;

    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
    }
    return 0;
}


int main()
{
    int a[100000];
    int z;
    cin>>z;
    for(int x=0;x<z;x++){
        cin>>a[x];
    }
    merge(a,0,z-1);
    for(int x=0;x<z;x++){
        cout<<a[x]<<" "<<endl;
    }

}
