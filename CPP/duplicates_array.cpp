#include <iostream>
using namespace std;

int main()
{
    int arr[20], no;
    cout << "Enter the size of array ";
    cin >> no;
    cout << "Enter any "<< no << " num in array: ";
    for(int i = 0; i < no; i++){
        cin >> arr[i];
    }
    cout << "Duplicate values are: ";
    for(int i = 0; i < no; i++){
        for(int j=i+1; j < no; j++){
            if(arr[i] == arr[j]){
                cout << "\n" << arr[i];
            }
        }
    }
}
