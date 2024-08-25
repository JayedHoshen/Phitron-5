/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
int countLeaf(BinaryTreeNode<int>* root) {
    if(root == NULL) return 0;
    
    if(root->left == NULL && root->right == NULL) return 1;
    else {
        int l = countLeaf(root->left);
        int r = countLeaf(root->right);
        return l+r;
    }
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int cnt = countLeaf(root);
    return cnt;
}