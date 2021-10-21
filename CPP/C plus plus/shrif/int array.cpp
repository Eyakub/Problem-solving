/*sorting from less to bigger */
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 4, 1, 6, 7, 5, 3}, i;
    for(i = 0; i < 7; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    sort(arr, arr+7); ///7 ta digit sort korbe, 4 dile 1st 4 ta digit sort korbe thn porer gula serial e jeivabe ase oivabe obshbe sort hobe na
    for(i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
