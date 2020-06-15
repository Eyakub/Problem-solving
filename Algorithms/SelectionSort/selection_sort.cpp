#include <bits/stdc++.h>
using namespace std;


void selection_sort(int A[], int len);

int main(){
    // int A[] = {7, 6, 5, 4, 3, 2, 1, 0};
    int sizeofarray;
    cout << "Enter the array length: ";
    cin >> sizeofarray;
    
    int A[sizeofarray];

    for (int i = 0; i < sizeofarray; i++){
        cin >> A[i];
    }
    selection_sort(A, sizeofarray);
    for (int i = 0; i < sizeofarray; i++) cout << A[i] << " ";
    return 0;
}

void selection_sort(int A[], int len){
    int min_index;
    
    // One by one move boundary of unsorted subarray
    for (int i = 0; i < len-1; i++){
        // find the minimum element in
        min_index = i;
        for (int j = i+1; j < len; j++){
            if (A[j] < A[min_index]){
                min_index = j;
            }
            // swap the found minimum element with the first element
            swap(A[min_index], A[i]);
        }
    }
}