#include<stdio.h>
int arr[20];
int main()
{
    int n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements:"); 	// 5 3 6 1
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    merge_sort(arr,0,n-1); 			///0, 3
    printf("Sorted array:");
    for(i=0; i<n; i++)
        printf("%d",arr[i]);
    return 0;
}
int merge_sort(int arr[],int low,int high)
{
	int mid;
    if(low<high) { 		// 0 < 3
        mid=(low+high)/2; // 0+3/2 = 1(floor) /// 0+1/2 = 0(floor)

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);
    }
    return 0;
}
int merge(int arr[],int l,int m,int h) /// l = 0, m = 1, h = 1
{
    int arr1[10],arr2[10];

    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=h-m;
    for(i=0; i<n1; i++)
        arr1[i]=arr[l+i];
    for(j=0; j<n2; j++)
        arr2[j]=arr[m+j+1];
    arr1[i]=9999; arr2[j]=9999;
    i=0;
    j=0;
    for(k=l; k<=h; k++) {
        if(arr1[i]<=arr2[j])
            arr[k]=arr1[i++];
        else
            arr[k]=arr2[j++];
    }
    return 0;
}

