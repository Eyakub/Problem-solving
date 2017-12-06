#include <stdio.h>

int main(){
    double N[12][12];
    char ch;
    int i, j;
    double res = 0.0;
    scanf("%c", &ch);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &N[i][j]);
            if(j < 11 - i){
                res += N[i][j];
            }
        }
   }

    if(ch == 'S')
         printf("%.1f\n", res);
    else
         printf("%.1f\n", res/66.0);

    return 0;

}
