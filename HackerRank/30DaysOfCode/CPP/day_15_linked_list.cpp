#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        // Properties
        int data;
        Node *next;
        // this constructor will be used to create the forward linked list only
        // where data will be take the place and next will remain NULL
        Node (int d){
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node *head, int data){
            Node* temp = head;
            // creating new node for the current data where next will be NULL as we don't know the next node yet
            Node* node = new Node(data);
            if (!head) return node; // if the head is NULL then return the new node
            while(temp->next){
                temp = temp->next;
            }
            temp->next = node;  // insert after the last node
            return head;
            
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
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
    return 0;
}