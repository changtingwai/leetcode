#include<iostream>
using namespace std;
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
//递归的时候不动根，求根，才能return根
struct TreeNode* invertTree(struct TreeNode* root) {
	struct TreeNode *temp;

	if(root!=NULL)
	{

		temp=root->left;
		root->left=invertTree(root->right);
		root->right=invertTree(temp);

	}

	return root;
    
}