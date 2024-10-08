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

int size(Node* head) {
    Node* tmp = head;

    int count = 0;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void insert(Node* head, int pos, int val) { 
    Node* newNode = new Node(val);

    Node* tmp = head;
    for(int i = 1; i < pos; i++) tmp = tmp->next;

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_head(Node* &head, int val) {
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

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

void insert_at_position(Node* head, int pos, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head;

    for(int i = 1; i < pos; i++) {
        tmp = tmp->next;
        if(tmp == NULL) return;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    cout << "tail-> " << tail->val << endl;

    int pos, val;
    cin >> pos >> val;

    if(pos > size(head)) cout << "Invalid index" << endl;
    else if(pos == 0) insert_head(head, val);
    else if(pos == size(head)) insert_tail(head, tail, val);
    else insert(head, pos, val);

    print_linked_list(head);
    cout << "tail-> " << tail->val << endl;

    return 0;
}