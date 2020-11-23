#include <bits/stdc++.h>

using namespace std;

int isKeywords(char buffer[])
{
    char keywords[33][10] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", "main"};
    int i, flag = 0;
    for (i = 0; i < 33; i++)
    {
        if (strcmp(keywords[i], buffer) == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    char ch, buffer[20], operators[] = "+-*/%=<>";
    char opening, closing;
    int i, j, k = 0, l;

    ifstream file;
    file.open("input.txt");

    if (!file.is_open())
    {
        cout << "Error while opening the file\n";
        exit(0);
    }

    while (!file.eof())
    {
        ch = file.get();

        // as operator has 8 size of character
        for (j = 0; j < 8; ++j)
        {
            if (ch == operators[j])
                cout << ch << " is an Operator" << endl;
        }

        // immediate parantheses check
        if (ch == '(' || ch == '{' || ch == '[')
        {
            opening = ch;
            continue;
        }
        if (ch == ')' || ch == '}' || ch == ']')
        {
            closing = ch;
            if (opening == '(' && closing == ')')
                cout << "()"
                     << " is Parantheses" << endl;
            else if (opening == '{' && closing == '}')
                cout << "{}"
                     << " is Parantheses" << endl;
            else if (opening == '[' && closing == ']')
                cout << "[]"
                     << " is Parantheses" << endl;
            continue;
        }

        // checking for semicolon
        if (ch == ';')
            cout << "; "
                 << "is End of a line";

        // checking if a character is a valid digit or alphabet
        if (isalnum(ch))
            buffer[k++] = ch;

        // if word got space or new line or a value means j should be more than 1
        else if ((ch == ' ' || ch == '\n') && (k != 0))
        {
            // setting the NULL as \0 end of the word
            buffer[k] = '\0';
            k = 0;
            if (isKeywords(buffer) == 1)
                cout << buffer << " is keyword" << endl;
            else
                cout << buffer << " is identifier" << endl;
        }
    }
    return 0;
}