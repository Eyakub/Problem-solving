#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double get_sq(double x1, double x2, double y1, double y2);
int main()
{
     double x1, x2, y1, y2,dis;
     scanf("%lf %lf", &x1, &y1);
     scanf("%lf %lf", &x2, &y2);
     dis = get_sq(x1, y1, x2, y2);
     printf("%.4lf\n", sqrt(dis));

    return 0;
}
double get_sq(double x1, double y1, double x2, double y2)
{
    double Distance;

    Distance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    return (Distance);
}
/*
#include <math.h>
#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, Distance;
    scanf("%lf %lf",&x1, &y1);
    scanf("%lf %lf",&x2, &y2);
    Distance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("%.4lf\n",sqrt(Distance));
    return 0;
}
*/
