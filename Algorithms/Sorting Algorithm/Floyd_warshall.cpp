#include <iostream>
using namespace std;
int b[100][100];
void floyds(int v)
{
    int i, j, k;
    for (k = 0; k < v; k++){
        for (i = 0; i < v; i++){
            for (j = 0; j < v; j++){
                if ((b[i][k] * b[k][j] != 0) && (i != j)){
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0)){
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
        cout << "Matrix: " << (k+1) << endl;
		for (int a = 0; a < v; a++){
			for (int c = 0; c < v; c++){
				cout << b[a][c] <<"\t";
			}
			cout << endl;
		}
		cout << endl << endl << endl;
    }
    for (i = 0; i < v; i++)    {
        for (j = 0; j < v; j++)        {
            cout<<b[i][j] <<"\t";
        }
		cout << endl;
    }
}
int main()
{
		int v = 5;
		b[0][1] = 3;
		b[0][4] = -4;
		b[0][3] = 8;
		b[1][4] = 7;
		b[1][3] = 1;
		b[2][1] = 4;
		b[3][2] = -5;
		b[3][0] = 2;
		b[4][3] = 6;
        floyds(v);
        return 0;
}
