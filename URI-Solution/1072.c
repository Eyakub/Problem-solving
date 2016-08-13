#include<stdio.h>
int main()
{
    int a, b, i, count, count1;
    scanf("%d", &a);
    count = 0;
    count1 = 0;
    for(i = 0; i < a; i++){
        scanf("%d", &b);
        if(b >= 10 && b <= 20){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("%d in\n%d out\n", count, count1);
    return 0;
}
