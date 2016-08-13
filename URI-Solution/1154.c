#include<stdio.h>
int main()
{
    int n, i, count = 0;
    float avg, sum = 0.0;
    for(; ;){
        scanf("%d", &n);
        if(n < 0) break;
        count++;
        sum = sum + n;
    }
    avg = sum/count;
    printf("%.2f\n", avg);
    return 0;
}
