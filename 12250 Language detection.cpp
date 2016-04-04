#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    int c = 1;
    while(true){

        cin >> s1;
        if(s1.compare("HELLO") == 0){
            cout << "Case " << c << ": " << "ENGLISH\n";
        }
        else if(s1.compare("HOLA") == 0){
            cout << "Case " << c << ": " << "SPANISH\n";
        }
        else if(s1.compare("HALLO") == 0){
            cout << "Case " << c << ": " << "GERMAN\n";
        }
        else if(s1.compare("BONJOUR") == 0){
            cout << "Case " << c << ": " << "FRENCH\n";
        }
        else if(s1.compare("CIAO") == 0){
            cout << "Case " << c << ": " << "ITALIAN\n";
        }
        else if(s1.compare("ZDRAVSTVUJTE") == 0){
            cout << "Case " << c << ": " << "RUSSIAN\n";
        }
        else if(s1.compare("#") == 0){
            break;
        }
        else
            cout << "Case " << c << ": " << "UNKNOWN\n";
        c++;
    }
    return 0;
}
