#include<iostream>
#include<math.h>
using namespace std;

int sroot(int i);
double sroot(double i);
long sroot(long i);

int main()
{
    cout << "Square root of 90.34 is: " << sroot(90.34) << "\n";
    cout << "Square root of 90L is: " << sroot(90L) << "\n";
    cout << "Square root of 90 is: " << sroot(90) << "\n";
    return 0;
}
int sroot(int i)
{
    cout << "Computing square root of integer.";
    return (int) sqrt((double) i);
}
double sroot(double i)
{
    cout << "Computing square root of double.";
    return sqrt(i);
}
long sroot(long i)
{
    cout << "Computing square root of long.";
    return (long) sqrt((double) i);
}


