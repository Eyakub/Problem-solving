#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int arryy = 10000;
int main()
{
	char ch[arryy];
	int flag = 0, n;
	while(gets(ch)){
        n = strlen(ch);
        for(int i = 0; i < n; i++){
            if(ch[i] == '"'){
                flag++;
                if(flag%2 == 1){
                    printf("``");
                }
                else if(flag%2 == 0){
                    printf("''");
                }
            }
            else{
                printf("%c", ch[i]);
            }
        }
        printf("\n");
	}
    return 0;
}
