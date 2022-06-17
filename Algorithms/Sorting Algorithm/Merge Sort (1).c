#include <stdio.h>
//Merge Sort


int n;
void mergeSort(int array[],int low,int mid,int high);
void partition(int array[], int low, int high);


int main ()
{
    int i;
    printf ("Enter Number of elements ");
    scanf ("%d",&n);
    int merge[n];
    printf ("\n\nEnter Numbers \n");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&merge[i]);
    }
    printf ("\n");
    partition(merge,0,n-1);
    printf ("\n\nAfter Merge Sort:\n\n");
    for (i=0; i<n; i++)
    {
        printf ("%d ",merge[i]);
    }
    printf ("\n\n");
    getch();
}

void partition(int array[], int low, int high)
{
    int mid,i;
    if (low<high)
    {
        mid = (low+high)/2;
        partition(array,low,mid);
        partition(array,mid+1,high);
        mergeSort(array,low,mid,high);
    }

}

void mergeSort(int array[],int low,int mid,int high)
{
    int temp[n],left,i,right,k;
    left=low;
    i=low;
    right=mid+1;
    while ((left<=mid)&&(right<=high))
    {
        if (array[left]<=array[right])
        {
            temp[i]=array[left];
            left++;
        }
        else
        {
            temp[i]=array[right];
            right++;
        }
        i++;
    }
    if (left>mid)
    {
        for (k=right; k<=high; k++)
        {
            temp[i]=array[k];
            i++;
        }
    }
    else
    {
        for (k=left; k<=mid; k++)
        {
            temp[i]=array[k];
            i++;
        }
    }

    for (k=low; k<=high; k++)
    {
        array[k]=temp[k];
    }

}
