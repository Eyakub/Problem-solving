#include <bits/stdc++.h>
using namespace std;

/*
left side <= pivot and right side > pivot
*/

int partition(int A[], int start, int end);

void quick_sort(int A[], int start, int end);

int main(){
    // int A[] = {7, 6, 5, 4, 3, 2, 1, 0};
    int sizeofarray;
    cout << "Enter the array length: ";
    cin >> sizeofarray;
    
    int A[sizeofarray];

    for (int i = 0; i < sizeofarray; i++){
        cin >> A[i];
    }
    quick_sort(A, 0, sizeofarray);
    for (int i = 0; i < sizeofarray; i++) cout << A[i] << " ";
    return 0;
}

int partition(int A[], int start, int end){
    int pivot = A[end];              // set last index as pivot
    int partitionIndex = start;     // set partition index as start initially

    for (int i = start; i < end; i++){
        if(A[i] <= pivot){
            swap(A[i], A[partitionIndex]);  // swap if element is lesser than pivot
            partitionIndex++;
        }
    }
    swap(A[partitionIndex], A[end]);        // swap pivot with element at partition index in middle
    return partitionIndex;
}

void quick_sort(int A[], int start, int end){
    if (start < end){
        int partitionIndex = partition(A, start, end);  // calling partition
        quick_sort(A, start, partitionIndex-1);
        quick_sort(A, partitionIndex+1, end);
    }
}