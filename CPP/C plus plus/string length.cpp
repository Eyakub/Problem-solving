#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int n = 0, m = 0;
    char ch[1000], ch1[1000];

    gets(ch);
    gets(ch1);
    for(int i = 0; ch[i] != '\0'; i++){
        n++;
    }
    for(int i = 0; ch1[i] != '\0' ; i++){
        m++;
    }
    int flag = 0;
    if(n == m){
        for(int i = 0; i < n; i++){
            if(ch[i] != ch1[i]){
                flag = 1;
                break;
            }
            else flag = 0;
        }
    }
    if(flag == 0){
        cout << "Found\n";
    }
    else cout << "Not found\n";

    return 0;
}
