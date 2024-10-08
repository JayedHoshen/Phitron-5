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
    set <int> s;
    void inputSet(TreeNode* root) {
        if(root == NULL) return;
        s.insert(root->val);
        inputSet(root->left);
        inputSet(root->right);
    }

    bool isUnivalTree(TreeNode* root) {
        inputSet(root);

        if(s.size() == 1) return true;
        else return false;
    }
};