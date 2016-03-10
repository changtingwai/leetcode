#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;
struct TreeNode {
	char val;
	TreeNode *left;
	TreeNode *right;
	TreeNode (int x):val(x),left(NULL),right(NULL){}
};
void later( struct TreeNode *&p) //前序创建树
{

    char ch;
    cin>>ch;
    if(ch=='*')
       { p=NULL;

}
    else
    {
        p=(struct TreeNode *)malloc(sizeof(struct TreeNode));
        p->val=ch;
		later((p->left));
		later((p->right));
    }

}
void pre_traverse(TreeNode *root)
{
	if(root)
	{
		cout<<root->val;
		if(root->left)
			pre_traverse(root->left);
		if(root->right)
			pre_traverse(root->right);
	}
}
void in_traverse(TreeNode *root)
{
	if(root)
	{
		if(root->left)
			in_traverse(root->left);
		cout<<root->val;
		if(root->right)
			in_traverse(root->right);
	}
}
void beh_traverse(TreeNode *root)
{
	if(root)
	{
		if(root->left)
			beh_traverse(root->left);
		if(root->right)
			beh_traverse(root->right);
		cout<<root->val;
	}
}
void pre_unTraverse(TreeNode *root)
{
	stack<TreeNode*> Stack;
	while(!Stack.empty()||root!=NULL)
	{
		while(root!=NULL)
		{
			cout<<root->val;
			Stack.push(root);
			root=root->left;
		}
		if(!Stack.empty())
		{
			root=Stack.top();
			Stack.pop();
			root=root->right;
		}
	}
}
void pre_unTraverse2(TreeNode *root)
{
	stack<TreeNode*> Stack;
	Stack.push(root);
	while(!Stack.empty())
	{
		while(root!=NULL)
		{
			cout<<root->val;
			root=root->left;
			if(root!=NULL)
				Stack.push(root);
				
		}

			root=Stack.top();
			Stack.pop();
			if(root->right!=NULL)
				Stack.push(root->left);

	}
}
//void pre_unTraverse2(TreeNode *root)
//{
//	stack<TreeNode*>Stack;
//	Stack.push(root);
//	while(!Stack.empty())
//	{
//		root=Stack.pop;
//		cout<<root->val;
//		if(root->right!=NULL)
//			Stack.push(root->right);
//		if(root->left!=NULL)
//			Stack.push(root->left);
//	}
//}
void in_unTraverse(TreeNode *root)
{
	stack<TreeNode*> S;
	while(root!=NULL||!S.empty())
	{
		while(root!=NULL)
		{
			S.push(root);
			root=root->left;
		}
		if(!S.empty())
		{
			root=S.top();
			cout<<root->val;
			S.pop();
			root=root->right;
		}		
	}
}
//要保证根结点在左孩子和右孩子访问之后才能访问，因此对于任一结点P，先将其入栈。
//如果P不存在左孩子和右孩子，则可以直接访问它；
//或者P存在左孩子或者右孩子，但是其左孩子和右孩子都已被访问过了，则同样可以直接访问该结点。
//若非上述两种情况，则将P的右孩子和左孩子依次入栈，
//这样就保证了每次取栈顶元素的时候，左孩子在右孩子前面被访问，左孩子和右孩子都在根结点前面被访问。
void beh_unTraverse(TreeNode *root)
{
	stack<TreeNode*>S;
	TreeNode *cur=NULL;
	TreeNode *pre=NULL;
	S.push(root);
	while(!S.empty())
	{
		cur=S.top();
		if((cur->left==NULL&&cur->right==NULL)||(pre!=NULL&&(pre==cur->left||pre==cur->right)))
		{
			cout<<cur->val;
			S.pop();
			pre=cur;
		}
		else
		{
			if(cur->right!=NULL)
				S.push(cur->right);
			if(cur->left!=NULL)
				S.push(cur->left);
		}
	}
}
int main()
{
	TreeNode *root;
	root=(struct TreeNode *)malloc(sizeof(struct TreeNode));
	later(root);
	pre_unTraverse2(root);
	system("pause");
	return 0;
}