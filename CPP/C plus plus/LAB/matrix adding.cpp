#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int m[100][100], n[100][100], mm, nn;
    cout << "Enter the matrix size: \n";
    cin >> mm >> nn;

    cout << "Enter the M matrix: \n";
    for(int i = 0; i < mm; i++){
        for(int j = 0; j < nn; j++){
            cin >> m[i][j];
        }
    }

    cout << "Enter the N matrix: \n";
    for(int i = 0; i < mm; i++){
        for(int j = 0; j < nn; j++){
            cin >> n[i][j];
        }
    }

    cout << "Result of adding M & N matrix: \n";
    for(int i = 0; i < mm; i++){
        for(int j = 0; j < nn; j++){
            cout << m[i][j]+n[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
