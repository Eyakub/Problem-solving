#include <iostream>

#include <algorithm>

#include <vector>

#include <string>


using namespace std;



int main()

{
    vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, -154};

    vector<string> stringVec = {"John", "Bob", "Joe", "Zack", "Randy"};

	    // Sorting the int vector
    sort(intVec.begin(), intVec.end());

    for (vector<int>::size_type i = 0; i != intVec.size(); ++i)
        cout << intVec[i] << " ";
	    cout << endl;
	 // Sorting the string vector
    sort(stringVec.begin(), stringVec.end());

    for (string &s : stringVec)
        cout << s << " ";
	    return 0;
	}
