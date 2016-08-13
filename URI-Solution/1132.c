#include<stdio.h>
int main()
{
    int x, y ,temp, i, sum = 0;
    scanf("%d %d", &x, &y);
    if(x > y){
        temp = y;
        y = x;
        x = temp;
    }
    for(i = x; i <= y; i++)
    {
        if(i % 13 != 0)
            sum = sum + i;
    }
    printf("%d\n", sum);
}
