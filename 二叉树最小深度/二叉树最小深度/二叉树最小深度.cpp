#include <iostream>
#include <stdlib.h>

using namespace std;

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
int depth=0;
int i=0;

static int minDepth(struct TreeNode *root,bool hasbrother)
{
	if(!root)
		return hasbrother?INT_MAX:0;
	return min(minDepth(root->left,root->right!=NULL),minDepth(root->right,root->left!=NULL))+1;
}
int minDepth(struct TreeNode *root) {
	return minDepth(root,false);

}
int main()
{
	int k;
	k=
	system("pause");
	return 0;
}