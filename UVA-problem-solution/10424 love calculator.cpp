#include<iostream>
#include<string>
#include<iomanip>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char ch[30], ch1[30];
    int len1, len2;

    while(gets(ch)){
        gets(ch1);
        len1 = strlen(ch);
        len2 = strlen(ch1);
        int sum1 = 0, f1;
        double out1;

        for(int i = 0; i < len1; i++){
            if(ch[i] >= 'a' && ch[i] <= 'z'){
                sum1 = sum1 + ch[i] - 96;
            }
            else if(ch[i] >= 'A' && ch[i] <= 'Z'){
                sum1 = sum1 + ch[i] - 64;
            }
        }
        f1 = 0;

        while(sum1 != 0){
            f1 = f1 + sum1 % 10; /// 65 % 10 = 5...6 % 10 = 6...f1 = 5+6 = 11 > 9
            sum1 /= 10;
            ///

        }
        if(f1 > 9){ /// 11
            sum1 = f1; ///sum1 = 11
            f1 = 0;
            while(sum1 != 0){
                f1 = f1 + sum1 % 10; ///11%10 = 1....1 % 10 = 1... f1 = 1 + 1 = 2
                sum1 /= 10;
            }
        }

        int sum2 = 0;
        for(int i = 0; i < len2; i++){
            if(ch1[i] >= 'a' && ch1[i] <= 'z'){
                sum2 = sum2 + (ch1[i] - 96);
            }
            else if(ch1[i] >= 'A' && ch1[i] <= 'Z'){
                sum2 = sum2 + (ch1[i] - 64);
            }
        }
        int f2 = 0;
        while(sum2 != 0){
            f2 = f2 + sum2 % 10;
            sum2 /= 10;
            ///

        }
        if(f2 > 9){
            sum2 = f2;
            f2 = 0;
            while(sum2 != 0){
                f2 = f2 + sum2 % 10;
                sum2 /= 10;
            }
        }

        if(f1 > f2){
            out1 = (double)f2*100 / (double)f1;
        }
        else out1 = (double)f1*100 / (double)f2;

        cout.precision(2);
        cout<< fixed<< out1 <<" %" << endl;

    }

    return 0;
}
