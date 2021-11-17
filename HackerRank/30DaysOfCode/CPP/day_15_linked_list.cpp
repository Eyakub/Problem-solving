#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node (int d){
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node *head, int data){

        }
        void display(Node *head){
            Node *start = head;
            while(start){
                cout << start->data << " ";
                start = start->next;
            }
        }
};


int main(){
    int n, data;
    Node* head = NULL;
    Solution mylist;
    
    cin >> n;
    while(n-->0){
        cout << n--> 0 << endl;
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
    return 0;
}