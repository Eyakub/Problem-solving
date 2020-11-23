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

bool arePair(char opening, char closing)
{
    if(opening == '(' && closing == ')') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '[' && closing == ']') return true;
    return false;
}

bool areParanthesesBalanced(string word)
{
    stack<char> st;
    for(int i = 0; i < word.length(); i++)
    {
        if(word[i] == '(' || word[i] == '{' || word[i] == '[')
        {
            st.push(word[i]);
        }
        else if(word[i] == ')' || word[i] == '}' || word[i] == ']')
        {
            if(st.empty() || !arePair(st.top(), word[i])) return false;
            else st.pop();
        }
        return st.empty() ? true:false;
    }
}

int main()
{
    string str;
    char buffer[20], operators[] = "+-*/%=<>", ch;
    int i, j, k = 0;

    cout << "Please enter a string: ";
    getline(cin, str);

    for (i = 0; i < str.size(); i++)
    {
        ch = str[i];

        // as operator has 8 size of character
        for (j = 0; j < 8; ++j)
        {
            if (ch == operators[j])
            {
                cout << str[i] << " is an Operator" << endl;
            }
        }

        // checking if a character is a valid digit or alphabet
        if (isalnum(ch))
        {
            buffer[k++] = ch;
        }

        // if word got space or new line or a value means j should be more than 1
        else if ((ch == ' ' || ch == '\n') && (k != 0))
        {
            // setting the NULL as \0 end of the word
            buffer[k] = '\0';
            k = 0;
            if (isKeywords(buffer) == 1)
            {
                cout << buffer << " is keyword" << endl;
            }
            else
            {
                cout << buffer << " is identifier" << endl;
            }
        }
        else if((ch == ')'))
    }
    return 0;
}