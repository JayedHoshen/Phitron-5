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

int countLeaf(Node* root) {
    if(root == NULL) return 0;
    
    if(root->left == NULL && root->right == NULL) return 1;
    else {
        int l = countLeaf(root->left);
        int r = countLeaf(root->right);
        return l+r;
    }
}

int maxHeight(Node* root) {
    if(root == NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node* root = inputBinaryTree();
    
    cout << maxHeight(root) << endl;

    return 0;
}