#include<iostream>
using namespace std;

int main()
{
    int a[100][100], b[100][100];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
