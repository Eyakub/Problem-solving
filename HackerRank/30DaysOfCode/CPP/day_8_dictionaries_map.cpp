#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> phone_book;
    for(int i = 0; i < n; i++){
        string name, phone;
        cin >> name >> phone;
        phone_book[name] = stoi(phone);
    }

    for(int i = 0; i < n; i++){
        string search_name;
        cin >> search_name;
        if(phone_book.find(search_name) != phone_book.end()){
            cout << phone_book.find(search_name)->first << "=" << phone_book.find(search_name)->second << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}