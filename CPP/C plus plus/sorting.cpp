#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int n;
        cin >> n;
        int arr[n]; /// 4 2 5 1 2
        for(int x = 0; x < n ; x++){
            cin >> arr[x];
        }
        for(int j = 0; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if( arr[j] > arr[k]){
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;


                }
                cout << arr[j] << " ";
            }
            ///cout << arr[j] << " ";
        }
        cout << endl;
        for(int y = 0; y < n; y++){
            cout << arr[y] << " ";
        }
    }
}
