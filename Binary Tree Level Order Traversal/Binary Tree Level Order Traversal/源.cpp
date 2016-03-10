#include <iostream>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
		 TreeNode(int x)  
		 {
			val=x;
		}
 };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

		vector<vector<int>>  v;
		if(root==NULL)
			return v;
		queue<TreeNode*> q;
		TreeNode *p;
		q.push(root);
		int i=0,j=0;
		int length=0;
		
		while(!q.empty())
		{
			v.resize(i+1);
			length=pow(2,i);
			for(j=0;j<length;j++)
			{
				
				if(!q.empty())
					{
						p=q.front();
						q.pop();
						v[i].resize(j+1);
					}
				else break;
				if(p!=NULL)
				{
					v[i][j]=p->val;
					if(p->left!=NULL)
						q.push(p->left);
					if(p->right!=NULL)
						q.push(p->right);
				}
				else
				{
					j--;
					length--;
				}
			}
			i++;
			j=0;
				
		}
    return v;
	}
};

int main()
{
	TreeNode *p=new TreeNode(1);
	p->left=NULL;
	p->right=NULL;
	Solution s;
	s.levelOrder(p);
	system("pause");
	return 0;
}