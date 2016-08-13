#include<stdio.h>
int main(){

    float a,b,result;
    scanf("%f %f",&a,&b);
    result=((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",result);
    return 0;
}

#include <stdio.h> //correct one :D
int main()
{
    float A,B,n;
    scanf("%f %f", &A,&B);
    n=((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",n);
    return 0;
}
