/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector <int> v;
void preOrderTree(TreeNode<int>* root) {
    if(root == NULL) return;
    v.push_back(root->data);
    preOrderTree(root->left);
    preOrderTree(root->right);
}

vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    preOrderTree(root);
    return v;
}
