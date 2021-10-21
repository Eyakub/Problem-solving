#include <stdio.h>
int array[100];

///for forwardly sorted / ascending
int forward(int n)
{
    int i, flag = 0;
    for (i = 0; i<n-1; i++){
        if (array[i]>array[i+1]){
            flag = 1;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}

///for reversely sorted descending

int rever (int n)
{
    int i, flag = 0;
    for (i = 0; i<n-1; i++){
        if (array[i] < array[i+1]){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}

int main ()
{
    int n, i;
    printf ("Enter the size of the array: \n");
    scanf ("%d", &n);
    printf ("Enter %d elements: \n",n);
    for (i = 0; i<n; i++)
        scanf ("%d", &array[i]);
    if (forward(n) == 0)
        printf ("sorted forwardly.\n");
    else if (rever(n) == 0)
        printf ("sorted backward.\n");
    else
        printf ("unsorted.\n");
    return 0;
}

