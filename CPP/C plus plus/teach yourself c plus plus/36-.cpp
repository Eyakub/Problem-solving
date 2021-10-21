#include<iostream>
#include<string>
using namespace std;

void date(char *date); ///parameter e *date dite hoilo kno...*ch kno na?
void date(int month, int day, int year);

int main()
{
    date("02/03/1996");
    date(02, 03, 1996);
    return 0;
}

void date(char *date)
{
    cout << "String date is: " << date << endl;
    ///eita ekta function taile () use korlam na kno?
}

void date(int month, int day, int year)
{
    cout << "Date: " << month << "/" << day << "/" << year << "\n";
}
