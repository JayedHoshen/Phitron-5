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
    
    cout << endl << endl << "Inserted at head" << endl << endl;
}

void insert_at_tail(Node* &head, Node* &tail, int v) { // O(1)
    Node *newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

    cout << endl << endl << "Inserted at tail O(1)" << endl << endl;
}

void insert_at_tail(Node* &head, int v) { // O(n)
    Node* newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        cout << endl << endl << "Inserted at head" << endl << endl;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) tmp = tmp->next;

    tmp->next = newNode;

    cout << endl << endl << "Inserted at tail" << endl << endl;
}

void insert_at_position(Node* head, int pos, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head;

    for(int i = 1; i < pos; i++) {
        tmp = tmp->next;

        if(tmp == NULL) {
            cout << endl << "Invalid index" << endl << endl;
            return;
        }
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    cout << endl << endl << "Inserted at position " << pos << endl << endl;
}

void delete_from_position(Node* head, int pos) {
    Node* tmp = head;
    for(int i = 1; i < pos; i++) {
        tmp = tmp->next;

        if(tmp == NULL) {
            cout << endl << "Invalid index" << endl << endl;
            return;
        }
    }

    if(tmp->next == NULL) {
        cout << endl << "Invalid index" << endl << endl;
        return;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    delete deleteNode;
    cout << endl << endl << "Deleted from position " << pos << endl << endl;
}

void delete_head(Node* &head) {
    if(head == NULL) {
        cout << endl << "Head not available" << endl << endl;
        return;
    }

    Node* deleteNode = head;
    head = head->next;

    delete deleteNode;
    cout << endl << endl << "Deleted head" << endl << endl;
}

void print_link_list(Node* head) {
    Node* tmp = head;
    cout << endl << "Your linked list: ";
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}

int main()
{
    Node* head = NULL;

    while(true) {
        cout << "Option 1: Insert at tail" << endl; // done
        cout << "Option 2: Insert at position" << endl; // done
        cout << "Option 3: Insert at head" << endl; // done
        cout << "Option 4: Print link list" << endl; // done
        cout << "Option 5: Delete from position" << endl; // done
        cout << "Option 6: Delete head" << endl; // done
        cout << "Option 7: Terminated" << endl;

        int op;
        cin >> op;

        if(op == 1) {
            int v;
            cout << "Please insert value: ";
            cin >> v;

            insert_at_tail(head, v);
        }
        else if(op == 2) {
            int pos, v;
            cout << "Please enter position: ";
            cin >> pos;

            cout << "Please insert value: ";
            cin >> v;

            if(pos == 0) insert_at_head(head, v);
            else insert_at_position(head, pos, v);
        }
        else if(op == 3) {
            int v;
            cout << "Please insert value: ";
            cin >> v;

            insert_at_head(head, v);
        }
        else if(op == 4) print_link_list(head);
        else if(op == 5) {
            int pos;
            cout << "Please enter position: ";
            cin >> pos;
            
            if(pos == 0) delete_head(head);
            else delete_from_position(head, pos);
        }
        else if(op == 6) delete_head(head);
        else if(op == 7) break;
    }

    return 0;
}