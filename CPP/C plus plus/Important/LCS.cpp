#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    int m = x.size();
    int n = y.size();

    int c[100][1000], b[100][1000];

    for(int i = 0; i < m; i++){
        c[i][0] = 0;
    }
    for(int i = 0; i < n; i++){
        c[i][0] = 0;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(x[i] == y[j]){
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 1;
            }
            else if(c[i-1][j] >= c[i][j-1]){
                c[i][j] = c[i-1][j];
                b[i][j] = 2;
            }
            else{
                c[i][j] = c[i][j-1];
                b[i][j] = 3;
            }
        }
    }
    cout << c[m-1][n-1] << endl;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
