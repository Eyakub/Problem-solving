#include <stdio.h>
#include <string.h>

void business_class_header()
{
    printf("\t===================================================\n");
    printf("\tBusiness class\n\n");
    printf("\tSeats available\n     \t1\t2\t3\t4\t5\n\n");
    printf("\t===================================================\n");
}

void economic_class_header()
{
    printf("\t===================================================\n");
    printf("\tEconomical class\n\n");
    printf("\tSeats available\n    \t6\t7\t8\t9\t10\n\n");
    printf("\t===================================================\n");
}

void choose_class()
{
    printf("\tChoose Class\n\n\t1. Business Class\n\t2. Economic class\n\n");
    printf("\t===================================================\n");
    printf("\tChoose: ");
}

int main()
{
    int c, p;
    int i;
    int j;
    int s[10] = {};
    printf("\n\n\t===================================================\n");
    printf("\t\tWelcome to Airline ticket management");
    printf("\n\t===================================================\n\n");
    for (j = 0; j < 10; j++)
    {
        choose_class();
        scanf("%i", &c);
        switch (c)
        {
        case 1:
            business_class_header();
            do
            {
                printf("\tPick a seat: ");
                scanf("%i", &p);
                s[j] = p;
                for (i = 0; i < j; i++)
                {
                    if (s[j] == s[i])
                    {
                        printf("\n\n\tThe Seat you are looking for is already booked.\n\n");
                        break;
                    }
                }
            } while (i != j);
            if (s[j] <= 5)
            {
                printf("\t===================================================\n");
                printf("\n");
                printf("\tClass: Business class\n");
                printf("\tSeat no : %i\n", s[j]);
                printf("\n");
            }
            else
                printf("\n\tWrong number!  No seat for you!\n\n");
            break;
        case 2:
            economic_class_header();
            do
            {
                printf("\tPick a seat: ");
                scanf("%i", &p);
                s[j] = p;
                for (i = 0; i < j; i++)
                {
                    if (s[j] == s[i])
                    {
                        printf("\n\n\tThe Seat you are looking for is already booked.\n\n");
                        break;
                    }
                }
            } while (i != j);
            if (s[j] >= 6)
            {
                printf("\t===================================================\n");
                printf("\n");
                printf("\tClass: Economical class\n");
                printf("\tSeat no : %i\n", s[j]);
                printf("\n");
            }
            else
                printf("\n\tWrong number!  No seat for you!\n\n");
            break;
        default:
            break;
        }
    }
    return 0;
}
