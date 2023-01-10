#include <iostream>
using namespace std;

void merge(int A[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int i, j, k;

    //Temporary arrays
    int L[n1], R[n2];

    //Initialize data into temporary arrays
    for (i = 0; i<n1; i++)
        L[i] = A[p+i];

    for (j = 0; j<n2; j++)
        R[j] = A[q+j+1];
    L[n1] = 9999999;
    R[n2] = 9999999;
    i = 0;
    j = 0;
    k = p;

    //merging....
    for ( k = p; k<=r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            ++i;
        }
        else{
            A[k] = R[j];
            ++j;
        }
    }
    /*
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            ++i;
        }
        else {
            A[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        A[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2)
    {
        A[k] = R[j];
        ++j;
        ++k;
    }
    */
}

void merge_sort(int A[], int p, int r){
    if (p<r){
        int q = (p+r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}

int main() {
    int A[100], n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (i = 0; i<n; i++)
        cin >> A[i];
    merge_sort(A, 0, n-1);
    cout << "sorted" << endl;
    for (i = 0; i<n; i++){
        cout << A[i] << endl;
    }
    return 0;
}
