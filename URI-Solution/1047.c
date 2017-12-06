#include <stdio.h>

int main()

{
    int st, sm, et, em, rm, rt;
    scanf("%d %d %d %d", &st, &sm, &et, &em);

    rt = et - st; //end time - start time in HOUR
    if (rt < 0) //if minus value that means its more than 24 hour
    {
        rt = 24 + (et - st); //so 24 + extra more hours
    }

    rm = em - sm; //end min - start min
    if (rm < 0) //if min value is minus means more than 60 min
    {
        rm = 60 + (em - sm); // so 60 + extra min
        rt--; //more than 60 min means 1 hour less
    }

    if (et == st && em == sm) //if time is equal on the both side
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else 
		    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rt, rm);

    return 0;

}
