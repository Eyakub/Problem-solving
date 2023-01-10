#include<iostream>
using namespace std;

int main(){
    int n, arr[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }                                               ///0 1 2 3
    for(int j = 1; j < n; j++){                     ///5 2 3 1*
        int key = arr[j];                           ///5 5 3 1
        int i = j-1;                                ///2 5 3 1*
        while(i >= 0 && arr[i] > key){              ///2 5 5 1
            arr[i+1] = arr[i];                      ///2 3 5 1
            i--;                                    ///
        }                                           ///
        arr[i+1] = key;                             ///
    }
    int i;
    for(i = 0; i < n-1; i++){
        cout << arr[i] << " ";
    }
    cout << arr[i];

	return 0;
}
