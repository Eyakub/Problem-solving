#include <stdio.h>
#include<string.h>
int main()
{
    int i, j, k, temp;
    char ara[100], kra[100];
    gets(ara);
    gets(kra);
    if(strlen(ara) != strlen(kra)) {
        printf("No");
        return 0;
    }
    k = strlen(ara);
    for(i = 0; i < k; i++) {
        for(j = 0; j < k - i - 1; j++) {
            if(ara[j] > ara[j + 1]) {
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < k; i++) {
        for(j = 0; j < k - i - 1; j++) {
            if(kra[j] > kra[j + 1]) {
                temp = kra[j];
                kra[j] = kra[j + 1];
                kra[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < strlen(ara); i++) {
        if(ara[i] != kra[i]) {
            printf("No");
            return 0;
        }
        else {
            printf("Yes");
            break;

        }
    }



    return 0;
}