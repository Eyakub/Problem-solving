#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20], ch1[20], ch2[20];
    gets(ch);
    gets(ch1);
    gets(ch2);
    if(strcmp(ch, "vertebrado") == 0){
        if(strcmp(ch1, "ave") == 0){
            if(strcmp(ch2, "carnivoro") == 0) printf("aguia\n");
            else if(strcmp(ch2, "onivoro") == 0) printf("pomba\n");
        }
        else if(strcmp(ch1, "mamifero") == 0){
            if(strcmp(ch2, "onivoro") == 0) printf("homem\n");
            else if(strcmp(ch2, "herbivoro") == 0) printf("vaca\n");
        }
    }
    else if(strcmp(ch, "invertebrado") == 0){
        if(strcmp(ch1, "inseto") == 0){
            if(strcmp(ch2, "hematofago") == 0) printf("pulga\n");
            else if(strcmp(ch2, "herbivoro") == 0) printf("lagarta\n");
        }
        else if(strcmp(ch1, "anelideo") == 0){
            if(strcmp(ch2, "hematofago") == 0) printf("sanguessuga\n");
            else if(strcmp(ch2, "onivoro") == 0) printf("minhoca\n");
        }
    }
    return 0;
}
