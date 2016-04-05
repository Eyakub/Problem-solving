#include<iostream>
using namespace std;

int main()
{
    int t, n, cnt = 1, result;
    while(true){
        cin >> t;
        if(t == 0){
            break;
        }
        int given = 0, give = 0;
        for(int i = 1; i <= t; i++){
            cin >> n;
            if(n > 0){
                give++;
            }
            if(n == 0){
                given++;
            }
        }
        result = give - given;
        cout << "Case " << cnt << ": " << result << endl;
        cnt++;
    }
    return 0;
}
