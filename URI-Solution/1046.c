#include <stdio.h>
int main()
{
    int t, a, h, b;

    scanf("%d %d",&a,&b);

    t = 24;
    if(a>b || a==b){
        h = (t-a) + b;
    }
    else{
        h = b-a;
    }
    printf("O JOGO DUROU %d HORA(S)\n",h);
    return 0;
}
