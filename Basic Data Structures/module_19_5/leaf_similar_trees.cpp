/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector <int> v1, v2;
    void leafNode(TreeNode* root, int x) {
        if(root == NULL) return;
        leafNode(root->left, x);
        leafNode(root->right, x);
        if(root->left == NULL && root->right == NULL) {
            if(x == 1) v1.push_back(root->val);
            else v2.push_back(root->val);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafNode(root1, 1);
        leafNode(root2, 2);

        if(v1 == v2) return true;
        else return false;
    }
};