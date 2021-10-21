#include <stdio.h>
int arr[100];
///function for the sort

void insertion (int n)
{
    int j;
    for (j = 1; j<n; j++){
        int key = arr[j];
        int i = j-1;
        while (i>=0 && arr[i] > key){
            arr[i+1] = arr[i];
            --i;
        }
        arr[i+1] = key;
    }
}

int main ()
{
    int n, i;
    printf ("Enter the size of the array: \n");
    scanf ("%d", &n);
    for (i = 0; i<n; i++)
        scanf ("%d", &arr[i]);
    insertion(n);
    printf ("after sort:\n");
    for (i = 0; i<n; i++)
        printf ("%d\n", arr[i]);
    return 0;
}

