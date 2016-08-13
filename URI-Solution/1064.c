#include <stdio.h>
#include <math.h>
int main()
{
    int i,c=0;
    float n,avg,sum = 0;
    for(i = 1; i <=6; i++)
    {
        scanf("%f",&n);
        if(n >= 0){
            c++;
            sum = sum+n;
        }
    }
    printf("%d valores positivos\n",c);
    avg = sum/c;
    printf("%.1f\n",avg);

    return 0;
}
