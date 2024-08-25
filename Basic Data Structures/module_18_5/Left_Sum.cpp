#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/
long long sum = 0;
void postorder(BinaryTreeNode<int>* root) {
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
	if(root->left) sum += root->left->data;
}

long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	sum = 0;
	postorder(root);
	return sum;
}