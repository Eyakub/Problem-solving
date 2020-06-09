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

void merge(int arr[], int start, int end);

void merge_sort(int arr[], int start, int end);

int main(){
    int arr[] = {5, 6, 7, 4, 3, 1};
    int length = sizeof(arr)/sizeof(arr[0]);

    merge(arr, 0, length - 1);
    return 0;
}

void merge(int arr[], int start, int end){
    int temp[end-start+1];
}