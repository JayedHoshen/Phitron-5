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

int searching_x(Node* head, int key) {
    Node* tmp = head;

    int cnt = 1;
    while(tmp != NULL) {
        if(tmp->val == key) return cnt;
        tmp = tmp->next;
        cnt++;
    }
    return 0;
}

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while(true) {
            cin >> val;
            if(val == -1) break;

            insert_tail(head, tail, val);
        }

        int x;
        cin >> x;
        int result = searching_x(head, x);

        if(result) cout << result - 1 << endl;
        else cout << "-1" << endl;
    }

    return 0;
}
