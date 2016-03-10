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
int maxDepth(struct TreeNode *root) {

	if(root!=NULL)
	{
		root->val=i;
		i++;
		if(depth<i)
			depth=i;
		maxDepth(root->left);
		maxDepth(root->right);
	}
	root=nullptr;

}
int main()
{
	int k;
	k=
	system("pause");
	return 0;
}