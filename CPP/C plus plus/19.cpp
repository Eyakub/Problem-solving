#include<iostream>
#include<conio.h> ///this is for _getch() for using in VS
using namespace std;
int main()
{
	int i;
	float f;
	char ch[80];
	cout << "Enter an integer, float, and string\n";
	cin >> i >> f >> ch;
	cout << "here is your data: ";
	cout << i << "\n" <<' ' << f <<' ' << ch;
	_getch();
	return 0;
}
