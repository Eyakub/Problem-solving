/**write a program that inputs the number of hours that an employee works and the employee's wage. then
display the employee's gross pay. */
#include<iostream>
using namespace std;
int main()
{
    double hour, wage, pay;
    cout << "Input hour that employee works.\n";
    cin >> hour;

    cout << "Input the salary.\n";
    cin >> wage;

    pay = hour * wage;

    cout << "pay is: $" << pay;

    return 0;
}
