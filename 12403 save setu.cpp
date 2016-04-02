#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int test, sum = 0, n;
    char ch[20], ch1[20];
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        cin >> ch;
        if(strcmp(ch, "donate") == 0)
        {
            cin >> n;
            sum += n;
        }
        else ///report er kahani bujlam na >.<
        {
            cout << sum << endl;
        }
    }
    return 0;
}
