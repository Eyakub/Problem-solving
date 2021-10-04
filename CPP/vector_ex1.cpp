#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    for(int i = 1; i <= 5; i++){
        v1.push_back(i);
    }

    cout << "Size: " << v1.size();
    cout << "\nCapacity: " << v1.capacity();
    cout << "\nMax Size: " << v1.max_size();

    // resize the vector size
    v1.resize(4);

    // print the vector size after resize
    cout << "\nAfter resize: " << v1.size();

    if(v1.empty()){
        cout << "\nVector is empty" << endl;
    }
    else{
        cout << "\nVector is not empty" << endl;
    }

    // shrinks the vector
    v1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = v1.begin(); it != v1.end(); it++){
        cout << *it << " ";
    }
    return 0;
}