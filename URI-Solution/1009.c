#include <stdio.h>
int main()
{
    char ch[100];
    double salary, per,total_salary;
    gets(ch);
    scanf("%lf %lf",&salary, &per);
    total_salary = salary + (15/100.00)*per;
    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}
