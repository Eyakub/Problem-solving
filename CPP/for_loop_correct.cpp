/*
Oyshi Tabassum Aditi
ID: 172-15-10203
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int index = 0, init_value;
    char ch;
    bool decrement = false, increment = false;

    while (input[index] != '\0')
    {
        if (input[index] == '=')
        {
            init_value = input[index + 1] - '0';
        }

        if (input[index] == '<' || input[index] == '>')
        {
            ch = str[index];
        }

        if (input[index] == '-' && input[index + 1] == '-')
        {
            dec = true;
        }
        if (input[index] == '+' && input[index + 1] == '+')
        {
            inc = true;
        }

        if (init_value <= 0 && ch == '<' && dec)
        {
            cout << "logically incorrect" << endl;
            break;
        }

        else if (init_value >= 0 && ch == '>' && inc)
        {
            cout << "logically correct" << endl;
            break;
        }
        index++;
    }
}