/*
Oyshi Tabassum Aditi
ID: 172-15-10203
*/

#include <bits/stdc++.h>
using namespace std;

void remove_whitespaces(string str, char *ch)
{
    int str_index = 0;
    int output_str_index = 0;
    while (str[str_index] != '\0'){
        ch[output_str_index] = str[str_index];

        if (str[str_index] == ' '){
            while (str[str_index + 1] == ' '){
                str_index++;
            }
        }
        output_str_index++;
        str_index++;
    }
    ch[output_str_index] = '\0';
}

int main()
{
    string input;
    char ch[255];

    getline(cin, input);
    remove_whitespaces(input, ch);

    cout << ch << endl;

    return 0;
}