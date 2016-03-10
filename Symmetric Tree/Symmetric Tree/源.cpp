#include <iostream>
#include <stdlib.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
int i=0;
int a[100];
class Solution {
public:
	void later(  TreeNode *&p) //Ç°Ðò´´½¨Ê÷
	{
    char ch;
    cin>>ch;
    if(ch=='*')
    { p=NULL;
	}
    else
    {
        p=(struct TreeNode *)malloc(sizeof( struct TreeNode));
        p->val=ch;
		later((p->left));
        later((p->right));
    }}
	bool isSymmetric(TreeNode* root) {
		if(root==NULL)
			return true;
		if(root->left==NULL&&root->right==NULL)
			return true;
		return (Symmetric(root->left,root->right));

    }
	bool Symmetric(TreeNode* left,TreeNode* right)
	{
		if(left==NULL)
			return right==NULL;
		if(right==NULL)
			return left==NULL;
		if(left->val!=right->val)
			return false;
		return Symmetric(left->left,right->right)&&Symmetric(left->right,right->left);
	}

 //   bool isSymmetric(TreeNode* root) {
	//	if(root==NULL)
	//		return true;
	//	preFull(root);
	//	int j=i-1;
	//	for(int k=0;k<=i/2;k++,j--)
	//		if(a[k]!=a[j])
	//			{return false;
	//			break;}
	//	return true;


 //   }
	//void preFull(TreeNode *root)
	//{
	//	if(root!=NULL)
	//	{
	//		preFull(root->left);
	//		a[i]=root->val;
	//		i++;
	//		preFull(root->right);
	//	}
	//	
	//}



};
int main()
{
	struct TreeNode *p;
p=(struct TreeNode *)malloc(sizeof(struct TreeNode));

Solution s;
s.later(p);
cout<<s.isSymmetric(p);
	system("pause");
	return 0;
}