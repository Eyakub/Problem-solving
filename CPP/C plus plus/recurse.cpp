#include<bits/stdc++.h>
using namespace std;

void recurse(int count);

int main()
{
	recurse(1);
	return 0;
}

void recurse (int count)
{
	if(count > 5){
		return;
	}
	recurse(count += 1);
	cout << "Count = " << count << endl;
}
