/** write a program that converts feet to inches. prompt the user for feet and display the equivalent number of inches. Have
your program repeat this process until the user enters 0 for the number for feet */
#include<iostream>
using namespace std;
int main()
{
    double feet, inch;
    cout << "Enter how many feet you want to converts.\n";
    cin >> feet;

    inch = feet*12;

    cout << "Inches is: " << inch;

    return 0;
}
