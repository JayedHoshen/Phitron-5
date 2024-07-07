#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this -> val = val;
        this -> next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int size(Node* head) {
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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

    int s = size(head);
    Node* tmp = head;
    if(s%2) {
        s = s / 2;
        for(int i = 1; i <= s; i++) tmp = tmp->next;
        cout << tmp->val << endl;
    }
    else {
        s = s / 2;
        for(int i = 1; i < s; i++) tmp = tmp->next;
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    
    return 0;
}