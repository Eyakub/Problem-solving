#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num, result = 0, mod, divide;
	cin >> num;
	int temp = num;
	while(temp > 0){
		mod = temp % 10; /// 1, 7, 3
		temp = temp / 10; /// 37, 3
		result = result + pow(mod, 3);
	}
	if(num == result){
		cout << "Yes! It's Armstrong number.\n";
	}
		
	else
		cout << "No, It's not armstrong number.\n";
		
	return 0;
}
