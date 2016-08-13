#include<stdio.h>
int main()
{
    float s, i, sum = 0;
    for(i = 1; i <= 100; i++){
        s = 1/i;
        sum = sum + s;
    }
    printf("%.2f\n", sum);
    return 0;
}
/**
#include <stdio.h>
void main ()
{

    float count=0, i, s;
    for (i=2; i<=100; ++i){
        count += 1/i;
    }
    s = 1+count;
    printf ("%.2f\n", s);
}
*/
