#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputBinaryTree() {
    int val;
    cin >> val;

    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue <Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft;
        Node* myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void printOuterLeft(Node* root) {
    if(root->left) {
        printOuterLeft(root->left);
        cout << root->left->val << " ";
    } 
    else if(root->right) {
        printOuterLeft(root->right);
        cout << root->right->val << " ";
    }
}

void printOuterRight(Node* root) {
    if(root->right) {
        cout << root->right->val << " ";
        printOuterRight(root->right);
    }
    else if(root->left) {
        cout << root->left->val << " ";
        printOuterRight(root->left);
    }
}

int main()
{
    Node* root = inputBinaryTree();
    
    if(root->left && root->right == NULL) {
        printOuterLeft(root);
        cout << root->val << " ";
    } 
    else if(root->right && root->left == NULL) {
        cout << root->val << " ";
        printOuterRight(root);
    }
    else if(root->left && root->right) {
        printOuterLeft(root);
        cout << root->val << " ";
        printOuterRight(root);
    }
    else cout << root->val << " ";    

    return 0;
}