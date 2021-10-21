#include<iostream>
using namespace std;
int arr[100];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            cout << "Even number is: "<< arr[i] << endl;
        }
        else if(arr[i] % 2 == 1){
            cout <<"Odd number is: "<< arr[i] << endl;
        }
    }
    return 0;
}
