#include <bits/stdc++.h>
using namespace std;


class Solution {
    private:
        stack<char> st;
        queue<char> q;
    public:
        // plate store (LIFO)
        void pushCharacter(char c){
            st.push(c);
        }
        // train ticket line... (FIFO)
        void enqueueCharacter(char c){
            q.push(c);
        }

        char popCharacter(){
            char top = st.top();
            st.pop();
            return top;
        }

        char dequeueCharacter(){
            char front = q.front();
            q.pop();
            return front;
        }
};


int main(){
    string s;
    getline(cin, s);

    Solution sObj;

    for(int i = 0; i < s.length(); i++){
        sObj.pushCharacter(s[i]);
        sObj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for(int i = 0; i < s.length()/2; i++){
        cout << sObj.popCharacter() << "-" << sObj.dequeueCharacter() << endl;
        if(sObj.popCharacter() != sObj.dequeueCharacter()){
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome){
        cout << "The word, " << s << ", is a palindrome." << endl;
    } else {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }
    return 0;
}