#include <stdio.h>
int main()
{
    float x, y, avg;
    while(scanf("%f", &x)){
        if(x < 0 || x > 10){
            printf("nota invalida\n");
        }
        else
            break;
    }
    while(scanf("%f", &y)){
        if(y < 0 || y > 10){
            printf("nota invalida\n");
        }
        else
            break;
    }
    avg = (x+y) / 2;
    printf("media = %.2f\n", avg);
    return 0;
}
