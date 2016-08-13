#include<stdio.h>
int main()
{
    int NUMBER,h;
    float a,SALARY;
    printf("Enter the number of employee:\n");
    scanf("%d",&NUMBER);
    printf("Enter the number of hours:\n");
    scanf("%d",&h);
    printf("Enter the amount they recieved per hour:\n");
    scanf("%f",&a);
    SALARY=h*a;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %f",SALARY);
    return 0;
}
