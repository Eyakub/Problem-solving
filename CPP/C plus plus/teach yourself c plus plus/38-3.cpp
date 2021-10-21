#include<iostream>
using namespace std;

int min(int a, int b);
char min(char a, char b);
double min(double a, double b);

int main()
{
    cout << "Int result: " << min(10, 20) << "\n";
    cout << "Char result: " << min('x', 'a') << "\n";
    cout << "Double result: " << min(0.22, 99.2) << "\n";
}

int min(int a, int b)
{
    return a < b? a:b;
}
char min(char a, char b)
{
    return tolower(a) < tolower(b) ? a: b;
}
double min(double a, double b)
{
    return a < b? a: b;
}
