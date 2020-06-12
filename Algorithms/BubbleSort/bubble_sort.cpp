/*
for k <- 1 to n-1
flag <- 0
    for i <- 0 to n-2
        if a[i] > a[i+1]
            swap(a[i], a[i+1])
            flag <- 1
    if flag==0 break
*/
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int length);

int main(){
    int arr[] = {5, 4, 3, 6, 7, 1};
    // int sizeofarray;
    // cout << "Enter the array length: ";
    // cin >> sizeofarray;
    
    // int arr[sizeofarray];

    // for (int i = 0; i < sizeofarray; i++){
    //     cin >> arr[i];
    // }
    int length_arr = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr, length_arr)
}

void bubble_sort(int arr[], int length){
    int flag = 0;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        // if value of flag is zero after all the 
        // iterations of inner loop then break out
        if (flag==0) break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}