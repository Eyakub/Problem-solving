#include<bits/stdc++.h>
using namespace std;

template <class T> void printArray(vector<T> i){
    for(int j = 0; j < i.size(); j++){
        cout << i[j] << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> int_vector(n);

    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        int_vector[i] = value;
    }

    cin >> n;
    vector<string> string_vector(n);
    for(int i = 0; i < n; i++){
        string value;
        cin >> value;
        string_vector[i] = value;
    }

    printArray<int>(int_vector);
    printArray<string> (string_vector);

    return 0;

}