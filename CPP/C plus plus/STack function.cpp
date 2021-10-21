#include<iostream>
#include<cstdio>

using namespace std;
int arr[100], top;
void push(int y);
int pop();
void display();

int main()
{
    //freopen("input.txt","r",stdin);
    int test, n, how;
    scanf("%d", &test);
    char ch;
    for(int i = 1; i <= test; i++){
        scanf("%d", &n);
        scanf("%d", &how);
        top = -1;
        printf("Case %d:\n", i);
        for(int j = 1; j <= how; j++){
            cin.ignore();
            scanf("%c", &ch);
            if(ch == 'P'){
                push(n);

            }
            else if(ch == 'R'){
                pop();

            }
            else if(ch == 'S'){
                display();

            }
        }
    }
    return 0;
}


void push(int n){
    int x;
    scanf("%d", &x);
    if(top == n-1){
        printf("Overflow!\n");
    }
    else{
        top++;
        arr[top] = x;
    }
}


int pop()
{
    if(top == -1){
        printf("No plates in stack!\n");
    }
    else
        top--;
}


void display()
{
    if(top == -1){
        printf("No plates in stack!\n");
    }
    else {
        for(int i = top; i > 0; i--){
            printf("%d ", arr[i]);
        }
        printf("%d", arr[0]);
        printf("\n");
    }
}

