#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int test, n, m, x, y;
    //freopen("11498.txt","r",stdin);
    //freopen("new.txt","w+",stdout);
    cin >> test;
    while(test != 0){
        cin >> n >> m;
        while(test--){
            cin >> x >> y;
            if(x == n || y == m){
                printf("divisa\n");
            }
            else if(x > n && y > m){
                printf("NE\n");
            }
            else if(x < n && y < m){
                printf("SO\n");
            }
            else if(x > n && y < m){
                printf("SE\n");
            }
            else if(x < n && y > m){
                printf("NO\n");
            }
        }
        cin >> test;
    }
    fclose();
    return 0;
}
