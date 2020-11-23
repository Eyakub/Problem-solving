/* Sample input: if (i<10)
Sample Output: 
if = identifier
() = parenthesis
i = variable
< = operator
10 = integer */
#include <bits/stdc++.h>

using namespace std;

int isKeyword(char buffer[])
{
    char keywords[33][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                             "do", "double", "else", "enum", "extern", "float", "for", "goto",
                             "if", "int", "long", "register", "return", "short", "signed",
                             "sizeof", "static", "struct", "switch", "typedef", "union",
                             "unsigned", "void", "volatile", "while", "main"};
    int i, flag = 0;
    for (i = 0; i < 32; ++i)
    {
        cout << keywords[i] << endl;
        cout << buffer << endl;
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
    string str;
    char operators[] = "+-*/%=><";
    char buffer[20];
    int i, j, k;

    cout << "Please enter your string: ";
    getline(cin, str);
    
    for (i = 0; i < str.size(); i++){
        cout << "inside loop--------->" << endl;
        char ch_single = str[i];

        cout << ch_single << endl;

        // as operator has 8 size of character
        for(k = 0; k < 8; ++k){
            cout << "--- operator check ---" << endl;
            if(ch_single == operators[i]){
                cout << str[i] << " is an operator" << endl;
            }
        }

        // checking if a character is a valid digit or alphabet
        if(isalnum(ch_single)){
            cout << "--- isalnum check ---" << endl;
            buffer[j++] = ch_single;
        }

        // if word got space or new line or a value means j should be more than 1
        else if((ch_single == ' ' || ch_single == '\n') && (j != 0)){
            // setting the NULL as \0 end of the word
            buffer[j] = '\0';
            j = 0;
            cout << buffer << endl;
            if(isKeyword(buffer) == 1){
                cout << buffer << " is keyword" << endl;
            }
            else{
                cout << buffer << " is identifier" << endl;
            }
        }
        
    }
    return 0;
}