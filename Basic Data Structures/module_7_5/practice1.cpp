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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head1, tail1, val);
    }

    Node* head = NULL;
    Node* tail = NULL;        
    while(true) {
        cin >> val;
        if(val == -1) break;
        
        insert_tail(head, tail, val);
    }
    
    if(size(head) == size(head1)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}