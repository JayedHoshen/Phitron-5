#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this -> val = val;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(tail == NULL) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }

    Node* i = head;
    Node* j = tail;
    int flag = 1;
    while(i != j && i->prev != j) {
        if(i->val != j->val) flag = 0;
        i = i->next;
        j = j->prev;
    }
    
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}