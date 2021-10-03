#include <bits/stdc++.h>

using namespace std;


vector <int> parseInts(string str){
    stringstream ss(str);
    vector <int> out;
    char skip;
    int temp;
    while(ss >> temp){
        // storing current (ss) into temp and push back to vector
        out.push_back(temp);
        // ss >> skip that is storing (,) in skip after every integer
        ss >> skip;
    }
    // copy(out.begin(), out.end(), ostream_iterator<int>(std::cout, " "));
    return out;
}

int main()
{
    string str;
    cin >> str;
    vector <int> integers = parseInts(str);
    for (int  i = 0; i < integers.size(); i++){
        cout << integers[i] << "\n";
    }
    return 0;
}