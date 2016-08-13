#include <stdio.h>
int main()
{
    double a,b,c,pi = 3.14159,rectangled_triangle, circle, p, trapezium,square,rectangle;
    scanf("%lf %lf %lf", &a, &b, &c);
    rectangled_triangle = .5*a*c;
    circle = pi*(c*c);
    p = a+b;
    trapezium = .5*p*c;
    square = b*b;
    rectangle = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",rectangled_triangle,circle,trapezium,square,rectangle);

    return 0;
}
