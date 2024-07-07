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

void insert_at_tail(Node* &head, Node* &tail, int v) { // O(1)
    Node *newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_tail(Node *&head, int v) { // O(n)
    Node *newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while(tmp->next != NULL) tmp = tmp->next;

    tmp->next = newNode;
}

void print_link_list(Node *head) {
    Node *tmp = head;
    cout << "Your link list = ";
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(1) {
        cout << "Option 1: Insert at tail." << endl;
        cout << "Option 2: Print link list." << endl;
        cout << "Option 3: Terminate." << endl;

        int op;
        cin >> op;

        if(op == 1) {
            cout << "Please insert value = ";
            
            int val;
            cin >> val;

            // insert_at_tail(head, val);
            insert_at_tail(head, tail, val);
        }
        else if(op == 2) print_link_list(head);
        else if(op == 3) break;
    }

    return 0;
}