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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
		vector<int> lev;
		queue<TreeNode *> que;
		if(root==NULL)
			return res;
		que.push(root);
		que.push(NULL);
		while(1)
		{
			TreeNode * cur=que.front();
			que.pop();
			if(!cur)//cur==NULL
			{
				res.push_back(lev);
				lev.clear();
				if(que.empty())
					break;
				que.push(NULL);
			}
			else
			{
				lev.push_back(cur->val);
				if(cur->left) que.push(cur->left);
				if(cur->right)que.push(cur->right);
			}
		}
		vector<vector<int>> result;
		int m=res.size();//第一维长度
		for(int i=m-1;i>=0;i--)
			result.push_back(res[i]);

		return result;
    }
};
int main()
{
	TreeNode *p=new TreeNode(1);
	p->left=NULL;
	p->right=NULL;
	Solution s;

	system("pause");
	return 0;
}