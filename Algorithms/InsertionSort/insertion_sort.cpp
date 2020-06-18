#include <bits/stdc++.h>
using namespace std;

/*
Pseudocode
for i = 1 to n
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key
        A[j+1] = A[j]
        j = j - 1
    End while
    A[j+1] = key
End for
*/

void insertionSort(int arr[], int length);

void display(int arr[], int length);

int main(){
    // int arr[] = {4, 6, 3, 1, 9, 7};
    int sizeofarray;
    cout << "Enter the array length: ";
    cin >> sizeofarray;
    
    int arr[sizeofarray];

    for (int i = 0; i < sizeofarray; i++){
        cin >> arr[i];
    }
    int length_arr = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr, length_arr);

    return 0;
}

void insertionSort(int arr[], int length){
    int key;
    // we can say first number of array already sorted, so check from 2nd no
    for (int i = 1; i < length; i++){
        key = arr[i];       // {6} at starting
        int j = i-1;        // this is for checking still the last iteration

        while (j >= 0 && arr[j] > key){     // first iter -> (4 > 6)
            // moving the right side element to the one position backword
            // until it reaches to the correct position
            arr[j+1] = arr[j];
            j--;
        }
        // moving current elemen tto its currect position
        arr[j+1] = key;
    }

    cout << "Sorted Array: ";
    display(arr, length);
}

void display(int arr[], int length){
    for (int i = 0; i < length; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}