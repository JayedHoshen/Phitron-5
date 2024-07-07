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

int main()
{
    Node* head_1 = NULL;
    Node* tail_1 = NULL;
    
    int val_1;
    while(true) {
        cin >> val_1;
        if(val_1 == -1) break;

        insert_tail(head_1, tail_1, val_1);
    }

    Node* head_2 = NULL;
    Node* tail_2 = NULL;
    
    int val_2;
    while(true) {
        cin >> val_2;
        if(val_2 == -1) break;

        insert_tail(head_2, tail_2, val_2);
    }

    bool flag = false;

    Node* tmp1 = head_1;
    Node* tmp2 = head_2;
    while(tmp1 != NULL || tmp2 != NULL) {
        if(tmp1 == NULL || tmp2 == NULL) {
            flag = true;
            break;
        } 
        if(tmp1->val != tmp2->val) {
            flag = true;
            break;
        }

        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}