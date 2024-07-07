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

void insert_at_head(Node* &head, int v) {
    Node* newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, int v) {
    Node* newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) tmp = tmp->next;

    tmp->next = newNode;
}

void insert_at_position(Node* head, int pos, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head; 

    for(int i = 1; i < pos; i++) tmp = tmp->next;

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_link_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    int size = 0;

    while(true) {
        int val;
        cin >> val;

        if(val == -1) break;

        size++;
        insert_at_tail(head, val);
    }

    int q;
    cin >> q;

    while(q--) {
        int pos, val;
        cin >> pos >> val;

        if(pos > size) cout << "Invalid" << endl;
        else {
            size++;
            if(pos == 0) {
                insert_at_head(head, val);
                print_link_list(head);
            }
            else {
                insert_at_position(head, pos, val);
                print_link_list(head);
            }
        }
    }

    return 0;
}