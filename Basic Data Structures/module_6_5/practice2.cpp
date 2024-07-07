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

int main()
{
    Node* head = NULL;

    while(true) {
        int val;
        cin >> val;
        
        if(val == -1) break;

        insert_at_tail(head, val);
    }

    int flag = 0;
    Node* tmp = head;
    while(tmp != NULL) {
        Node* tmp1 = tmp;
        while(tmp1->next != NULL) {
            if(tmp->val == tmp1->next->val) {
                flag = 1;
                break;
            }
            tmp1 = tmp1->next;
        }
        tmp = tmp->next;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}