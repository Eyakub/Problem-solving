#include <stdio.h>
#include <math.h>
void main ()
{
    int a, b, c, maiorAB, maior; ///first e int nilam. MaiorAB = A, B er moiddhe jeida boro oida ber korar jnne. ar maior ta hoile MaiorAB r C er moiddhe jeida boro ber korte
    scanf ("%d %d %d", &a, &b, &c); ///scan korlam
    maiorAB = (a+b+abs(a-b))/2; ///formula use korlam korar jnne A ar B er moiddhe boro jeida oida maiorAB er value hishabe add hoilo.
    maior = (maiorAB+c+abs(maiorAB-c))/2; ///eibar maiorAB ar C er moiddhe boro ta maior er moiddhe store hoilo.
    printf ("%d eh o maior\n", maior); ///maior print korlam
}
