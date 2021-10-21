#include<iostream>
using namespace std;
double feet_to_meter(int n);
double meter_to_feet(int n);
int main()
{
    double n;
    cin >> n;
    string s;
    cout << "m for meter , f for feet\n";
    cin >> s;
    if(s == "m"){
        cout << meter_to_feet(n) << endl;
    }
    else if(s == "f"){
        cout << feet_to_meter(n) << endl;
    }
    return 0;
}

double feet_to_meter(int n)
{
    double result;
    result =n/(.3048);
    return result;
}

double meter_to_feet(int n)
{
    double result;
    result = n*(.3048);
    return result;
}
