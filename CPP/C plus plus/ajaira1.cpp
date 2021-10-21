#include<stdio.h>
int main()
{
    int inter = 0, gremio = 0, empates = 0, grenais = 0;
    int n, x, y, check;
    while(scanf("%d %d", &x, &y)){
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        if(x > y){
            inter++;
        }
        else if(x < y){
            gremio++;
        }
        else if(x == y){
            empates++;
        }
        scanf("%d", &check);
        if(check == 1) continue;
        else if(check == 2) break;
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n", inter, gremio, empates);
    printf("Inter venceu mais\n");
    return 0;
}
