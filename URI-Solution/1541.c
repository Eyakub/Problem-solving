#include<bits/stdc++.h>
using namespace std;
/*
from first example:
20% korte partesi 4*20 area er land er upor
so 
20------80
1-------80/20
100-----(80*100)/20 //
jehetu land side ber korte bolse square shape er, so (sqrt) :p
*/
int main()
{
	int a, b, c;
	while(cin >> a && a != 0){
		cin >> b >> c;
		double x = sqrt((a * b * 100) / (double)c);
		cout << trunc(x) << endl; //floor value like 3.15 = 3
	}
	
	return 0;
}
