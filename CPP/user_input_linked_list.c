#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 200

typedef struct User {
    char name[50];
    int age;
    struct User * next;
} User;

int main()
{
    int i, nuser = 5;
    
}