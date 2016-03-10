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
        vector<vector<int>> res;
		vector<int> lev;  
		if(root==NULL)
			return res;
		queue<TreeNode*> que;
		que.push(root);
		que.push(NULL);//end of level
		while(true)
		{
			TreeNode *cur=que.front();
			que.pop();

			if(!cur)//cur==null
			{
				res.push_back(lev);
				lev.clear();
				if(que.empty())
					break;
				que.push(NULL);//进入到这里意味着一行结束
			}
			else
			{
				lev.push_back(cur->val);
				if(cur->left) que.push(cur->left);
				if(cur->right)que.push(cur->right);
			}
		}
		return res;
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