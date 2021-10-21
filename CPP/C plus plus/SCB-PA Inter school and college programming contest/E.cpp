#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int t;
	float x1, y1, x2, y2;
	cin >> t;
	if(t <= 100 && t > 0) {
		for(int i = 1; i <= t; i++) {
			cin >> x1 >> y1 >> x2 >> y2;
			float r1 = (x2 - x1) * (x2 - x1);
			float r2 = (y2 - y1) * (y2 - y1);
			float r = sqrt(r1 + r2);
			cout << setprecision(4) << fixed;
			cout << "Case " << i << ": " << r << endl;

		}
	}

	return 0;
}
