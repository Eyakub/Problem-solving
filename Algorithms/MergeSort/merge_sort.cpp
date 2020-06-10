/* 
- divide the unsorted list into N sublist, each containing 1 element
- Repeatedly merge sublists to produce newly sorted sublists until 
    there is only 1 sublist remaining. This will be the sorted list.

-- Merge function take two intervals
-- one from start to mid
-- second from mid+1 to end
-- and merge them in sorted order

Arr, start, mid, end
*/

#include <bits/stdc++.h>
using namespace std;

// merge two subarrays of arr[]
// first subarray is arr[start...mid]
// second subarray is arr[mid+1...end]
void merge(int arr[], int start, int mid, int end);

void merge_sort(int arr[], int start, int end);

void display(int arr[], int length);

int main(){
    // int arr[] = {5, 6, 7, 4, 3, 1};
    int sizeofarray;
    cout << "Enter the array length: ";
    cin >> sizeofarray;
    
    int arr[sizeofarray];

    for (int i = 0; i < sizeofarray; i++){
        cin >> arr[i];
    }
    int length = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr, 0, length - 1);

    cout << "Sorted array is: ";
    display(arr, length);
    return 0;
}

void merge(int arr[], int start,int mid, int end){
    int i, j, k;
    int arr1 = mid - start + 1;
    int arr2 = end - mid;

    // create temp arrays
    int L[arr1], R[arr2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < arr1; i++){
        L[i] = arr[start+i];
    }
    for(j = 0; j < arr2; j++){
        R[j] = arr[mid+1+j];
    }

    // Merge the temp arrays back into arr[start...end]
    i = 0;  // init index of first subarray
    j = 0;  // init index of second subarray
    k = start;  // init index of merged subarray
    while(i < arr1 && j < arr2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while(i < arr1){
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[], if there are any
    while (j < arr2){
        arr[k] = R[j];
        j++;
        k++;
    }
}


/*
start is for left index and end is right index of the subarray of arr to be sorted
*/
void merge_sort(int arr[], int start, int end){
    if (start < end){
        // same as (start+end)/2, but avoid overflows for large start and end
        int mid = start + (end-start)/2;

        // sort first and second values
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }
}

void display(int arr[], int length){
    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}