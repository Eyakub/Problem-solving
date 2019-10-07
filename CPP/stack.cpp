#include<bits/stdc++.h>
#include<stack>
using namespace std;

void showStack(stack <int> s)
{
    while(!s.empty()){
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << "The stack is: ";
    showStack(s);

    cout << "\ns.size(): " << s.size();
    cout << "\ns.top(): " << s.top();

    cout << "\ns.pop(): ";
    s.pop();
    showStack(s);

    return 0;
}
