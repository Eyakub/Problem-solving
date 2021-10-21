#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;

int main()
{
    int min_stars = 1;
    int p_height = 5;
    int p_space = p_height - 1;
    int i, j, k;
///    clrscr();
    for(int i = 0; i < p_height; i++){
        for(j = p_space; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < min_stars; k++){
            cout << "*";
        }
        min_stars += 2;
    cout << "\n";
    }
///    getch();
    return 0;
}

