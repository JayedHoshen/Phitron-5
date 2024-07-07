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
    int cnt = 0;

    while(true) {
        int val;
        cin >> val;

        if(val == -1) break;

        cnt++;

        insert_at_tail(head, val);
    }

    int n;
    Node* tmp = head;
    if(cnt%2) {
        n = cnt / 2;
        for(int i = 1; i <= n; i++) tmp = tmp->next;
        
        cout << tmp->val << endl;
    }
    else{
        n = cnt / 2;
        for(int i = 1; i < n; i++) tmp = tmp->next;
        
        cout << tmp->val << " " << tmp->next->val << endl;
    }

    return 0;
}