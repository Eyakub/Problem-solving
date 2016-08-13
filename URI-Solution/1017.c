#include<stdio.h>
int main()
{
    int hour, avg_dis;
    float litter;
    scanf("%d%d", &hour, &avg_dis);
    litter = (avg_dis/12.0) * hour;
    printf("%.3f\n",litter);
    return 0;
}
