#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int v, e, m[100][100];
    cin >> v >> e;
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            m[i][j] = 0;
        }
    }
    int a, b;
    for(int j = 0; j < e; j++)
    {
        cin >> a >> b;
        m[a][b] = 1;
    }
    for(int i = 0; i < v ; i++){
        for(int j = 0; j < v; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
