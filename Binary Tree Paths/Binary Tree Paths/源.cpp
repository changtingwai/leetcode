#include <iostream>
#include <stdlib.h>
#include <vector>
#include <sstream>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:

    vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> result;
		if(root==NULL)
			return result;
		vector<int>path;
		bfs(root,path,result);
		return result;
    }
private:
	void bfs(TreeNode* node,vector<int>& path,vector<string>& result)
	{
		if(node==NULL)
			return;
		path.push_back(node->val);
		if(node->left==NULL&&node->right==NULL)
			result.push_back(generatePath(path));
		else
		{
			if(node->left!=NULL)
			{
				bfs(node->left,path,result);
				path.pop_back();
			}
			if(node->right!=NULL)
			{
				bfs(node->right,path,result);
				path.pop_back();
			}
		}


	}
	//¸¨Öúº¯Êý£¬Éú³ÉÂ·¾¶×Ö·û´®
	string generatePath(vector<int> path)
	{
		stringstream ss;
		int i;
		for(i=0;i<path.size()-1;i++)
			ss<<path[i]<<"->";
		ss<<path[i];
		return ss.str();
	}
};
int main()
{
	return 0;
}