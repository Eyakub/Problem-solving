#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return (c=='a' || c=='e'||c=='i' || c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
}

string reverseVowel(string str)
{
    int j = 0;

    // Storing the vowels separately
    string vowel;
    for(int i = 0; str[i] != '\0'; i++){
        if(isVowel(str[i])){
            vowel[j++] = str[i];
        }
    }

    // Placing the vowels in the reverse
    // order in the string
    for(int i = 0; str[i] != '\0'; i++){
        if(isVowel(str[i])){
            str[i] = vowel[--j];
        }
    }

    return str;
}

int main()
{
    string str;
    cin >> str;
    cout << reverseVowel(str);
    return 0;
}
