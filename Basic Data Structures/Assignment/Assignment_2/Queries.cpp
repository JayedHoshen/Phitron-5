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

int link_size(Node* head) {
    Node* tmp = head;
    int cnt = 0; 
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

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

void delete_head(Node* &head) {
    if(head == NULL) return;

    Node* deleteNode = head;
    head = head->next;

    delete deleteNode;
}

void delete_from_position(Node* head, int pos) {
    Node* tmp = head;

    if(pos < 0 || pos > link_size(head)) return;
    else {
        for(int i = 1; i < pos; i++) {
            tmp = tmp->next;
            if(tmp == NULL) return;
        }
        if(tmp->next == NULL) return;

        Node* deleteNode = tmp->next;
        tmp->next = tmp->next->next;

        delete deleteNode;
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
    
    int tc; cin >> tc;
    while(tc--) {
        int x, v;
        cin >> x;

        if(x == 0) {
            cin >> v;
            insert_at_head(head, v);
        }
        else if(x == 1) {
            cin >> v;
            insert_at_tail(head, v);
        }
        else if(x == 2) {
            cin >> v;
            if(v == 0) delete_head(head);
            else delete_from_position(head, v);
        }

        print_link_list(head);
    }

    return 0;
}