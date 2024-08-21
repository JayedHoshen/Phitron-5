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
        // 1. line theke ber kore ano
        Node* p = q.front();
        q.pop();

        // 2. jabotio ja kaj ase koro
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

        // 3. children gulo line e dao
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void levelOrder(Node* root) {
    if(root == NULL) {
        cout << "Tree nai" << endl;
        return;
    }

    queue <Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int main()
{
    Node* root = inputBinaryTree();
    levelOrder(root);

    return 0;
}