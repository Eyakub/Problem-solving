#include<iostream>
using namespace std;
 
int main()
{
    int n, l = 0, h;
    cin >> n;
    int arr[n];
    h = n;
    bool found = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter a number to search: ";
    cin >> x;
    while(l <= h && !found){
        int m = (l + h)/2;
        if(arr[m] < x){
            l = m + 1;
        }
        else if(arr[m] > x){
            h = m - 1;
        }
        else{
            found = true;
            break;
        }
    }
    if(found){
        cout << "found";
    }
    else cout << "Not found";
 
    return 0;
}
