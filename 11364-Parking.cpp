#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        int x = 0;

        for(int j = 0; j < n; j++)
        {
            cin >> ar[j];
        }
        int y = 100;
        for(int j = 0; j < n; j++)
        {
            if(ar[j] > x)
            {
                x = ar[j];
            }
        }

        for(int k = 0; k < n; k++)
        {
            if(ar[k] < y)
            {
                y = ar[k];
            }
        }
        cout << (x-y)*2 << endl;
    }
    return 0;
}
