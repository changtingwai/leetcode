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
	if(root==nullptr)
		return 0;
	
	return(max(maxDepth(root->left),maxDepth(root->right)))+1;

}
int main()
{
	int k;
	k=
	system("pause");
	return 0;
}