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

void insert_tail(Node* &head, Node* &tail , int v) {
    Node* newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node* &head) {
    Node* tmp = head;
    while(tmp != NULL && tmp->next != NULL) {
        Node* tmp1 = tmp;
        while(tmp1->next != NULL) {
            if(tmp1->next->val == tmp->val) {
                Node* deleteNode = tmp1->next;
                tmp1->next = tmp1->next->next;
                delete(deleteNode);
            }
            else tmp1 = tmp1->next;
        }
        tmp = tmp->next;
    }
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
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;

        insert_tail(head, tail, val);
    }

    remove_duplicate(head);
    print_link_list(head);

    return 0;
}