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

int list_size(Node* head) {
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

    while(true) {
        int val;
        cin >> val;
        
        if(val == -1) break;

        insert_at_tail(head, val);
    }

    int size = list_size(head);
    cout << size << endl;

    return 0;
}