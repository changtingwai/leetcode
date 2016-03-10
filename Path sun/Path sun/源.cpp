#include <iostream>
#include <stdlib.h>
#include <vector>
#include<queue>
using namespace std;
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
bool hasPathSum(struct TreeNode* root, int sum) {
	if(root==NULL)
		return false;
	if(root->left==NULL&&root->right==NULL&&root->val==sum)
		return true;
	return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);
}
int main()
{
	TreeNode * root=new TreeNode;
	root->val=1;
	root->left=NULL;
	root->right=NULL;
	cout<<hasPathSum(root,0);


	system("pause");
		return 0;
}