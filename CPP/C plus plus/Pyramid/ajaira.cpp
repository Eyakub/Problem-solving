#include<iostream>
using namespace std;

int main()
{
    int test, l = 0, h, m, flag = 0;
    cin >> test;
    h = test - 1;
    int arr[test];
    for(int i = 0; i < test; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < test; i++){
        for(int j = i + 1; j < test; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After sorting in Ascending order: ";
    for(int i = 0; i < test; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter a number to search: ";
    int n;
    cin >> n;
    while(l <= h && flag == 0){
        m = (l+h)/2;
        if(arr[m] > n){
            h = m - 1;
            cout << h << endl;
        }
        else if(arr[m] < n){
            l = m + 1;
            cout << l << endl;
        }
        else{
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "Found\n";
    }
    else{
        cout << "Not Found\n";
    }
    return 0;
}
