#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, result = 0;
    cin >> n;

    cin.ignore();

    getline(cin, s);

    // Create an array to store the count of each character
    int count[26] = {0};

    // Iterate through the string and count the occurrences of each character
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }

    // Print the count of each unique character
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 1)
        {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}