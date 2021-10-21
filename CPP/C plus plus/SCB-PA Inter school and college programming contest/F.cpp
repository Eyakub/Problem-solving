#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14159265;
	int t;
	cin >> t;
	if(t <= 100 && t > 0){
		for(int i = 1; i <= t; i++){
			int a;
			cin >> a;
			int result = 2 * PI * a;
			cout << result << endl;
		}
	}
	return 0;
}
