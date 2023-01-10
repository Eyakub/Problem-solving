#include <stdio.h>
#define FALSE 0
#define TRUE 1

int is_fifa_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            return year % 400 == 0;
        }
        else
        {
            return TRUE;
        }
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (is_fifa_year(year))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}