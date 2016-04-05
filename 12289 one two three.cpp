#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int test;
    char ch[20];
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        cin >> ch;
        if(strlen(ch) > 3){
            cout << "3\n";
        }
        else if(ch[0] == 'o' && ch[1] == 'n' && ch[2] == 'e'){
            cout << "1" << endl;
        }
        else if(ch[0] == 'o' && ch[1] == 'n'){
            cout << "1" << endl;
        }
        else if(ch[0] == 'o' && ch[2] == 'e'){
            cout << "1" << endl;
        }
        else if(ch[1] == 'n' && ch[2] == 'e'){
            cout << "1" << endl;
        }
        else if(ch[0] == 't' && ch[1] == 'w' && ch[2] == 'o'){
            cout << "2" << endl;
        }
        else if(ch[0] == 't' && ch[1] == 'w'){
            cout << "2" << endl;
        }
        else if(ch[0] == 't' && ch[2] == 'o'){
            cout << "2" << endl;
        }
        else if(ch[2] == 'o' && ch[1] == 'w'){
            cout << "2" << endl;
        }
    }
    return 0;
}
