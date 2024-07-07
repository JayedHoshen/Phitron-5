#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this -> val = val;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

class myStack { // O(1)
public:
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;
    void push(int val) {
        sz++;

        Node* newNode = new Node(val);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop() {
        sz--;

        Node* deleteNode = tail;
        tail = tail->prev;

        if(tail == NULL) head = NULL;
        else tail->next = NULL;

        delete deleteNode;        
    }
    int top() {
        return tail->val;
    }
    int size() {
        return sz;
    }
    bool empty() {
        if(sz == 0) return true;
        else return false;
    }

};

int main() // O(N)
{
    myStack st;

    // st.push(10);
    // cout << st.top() << endl;

    // st.pop(); // single top() / pop() use korle error asbe
    // cout << st.top() << endl;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl; 

    return 0;
}