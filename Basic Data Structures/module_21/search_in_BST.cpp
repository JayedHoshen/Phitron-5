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

bool searchBST(Node* root, int x) {
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val) return searchBST(root->left, x);
    else return searchBST(root->right, x);
}

int main()
{
    Node* root = inputBinaryTree();

    int n; 
    cin >> n;

    if(searchBST(root, n)) cout << "Yes, found";
    else cout << "No, not found";

    return 0;
}