#include<bits/stdc++.h>
using namespace std;

void showQ(queue <int> q)
{
    while(!q.empty()){
        cout << '\t' << q.front();
        q.pop();
    }
    cout << '\n' << endl;
}

int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "The queue is: ";
    showQ(q);

    cout << "\nq.size() : " << q.size();
    cout << "\nq.front() : " << q.front();
    cout << "\nq.back() : " << q.back();

    cout << "\nq.pop() : ";
    q.pop();
    showQ(q);

    return 0;
}
