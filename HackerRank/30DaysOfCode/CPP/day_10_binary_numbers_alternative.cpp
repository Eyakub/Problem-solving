#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int reminder = 0, count = 0, result = 0;

    while (n > 0){
        reminder = n % 2;
        n = n / 2;

        if (reminder == 1){
            count++;
        } else {
            count = 0;
        }

        if (count > result){
            result = count;
        }
    }
    cout << result << endl;
    return 0;
}