#include <stdio.h>

void reverseCode(int n)
{
    int rev = 0, digit;
    while (n > 0)
    {
        // extract the last digit of the number
        digit = n % 10;
        printf("%c", digit + 64);
        // add the digit to the reversed number
        rev = rev * 10 + digit;

        // remove the last digit from the number
        n /= 10;
    }
}

int main()
{
    int n, i, j;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < n; j++)
    {
        reverseCode(arr[j]);
        printf("\n");
    }
    return 0;
}