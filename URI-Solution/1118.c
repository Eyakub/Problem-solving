#include <stdio.h>
int main ()
{
    double x, y, media;
    int choice;
    while (1){
        while (scanf ("%lf", &x)){
            if (x>=0 && x<=10.0) break;
            else printf ("nota invalida\n");
        }
        while (scanf ("%lf", &y)){
            if (y>=0 && y<=10.0) break;
            else printf ("nota invalida\n");
        }
        printf ("media = %.2lf\n", ((x+y)/2));
        while (1){
            printf ("novo calculo (1-sim 2-nao)\n");
            scanf ("%d", &choice);
            if (choice == 1) break;
            else if (choice == 2) return 0;
        }
    }
    return 0;
}
