#include<stdio.h>

int main()
{
    int a[100][100], b[100][100], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
