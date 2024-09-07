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
    int tilt = 0;
    int maxHeight(TreeNode* root) {
        if(root == NULL) return 0;
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);
        tilt = tilt + abs(l - r);
        return (l + r + root->val);
    }

    int findTilt(TreeNode* root) {
        tilt = 0;
        int s = maxHeight(root);
        return tilt;
    }
};