#include <iostream>
#include <stdlib.h>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
	static const int big=9;
	static const int small=3;
    bool isValidSudoku(vector<vector<char>>& board) {


		for(int i=0;i<big;i++)
		{
			set<char> s;
			//检查每行
			for(int j=0;j<big;j++)
			{
				if(board[i][j]=='.')
					continue;
				else if(s.count(board[i][j]))
					return false;
				else
					s.insert(board[i][j]);
			}
			//检查每列
			s.clear();
			for(int j=0;j<big;j++)
			{
				if(board[j][i]=='.')
					continue;
				else if(s.count(board[j][i]))
					return false;
				else
					s.insert(board[j][i]);
			}
			//检查每个小九宫格
			s.clear();
			int x=i/3*3;
			int y=i%3*3;
			for(int j=x;j<x+3;j++)
			{
				for(int k=y;k<y+3;k++)
				{
				if(board[j][k]=='.')
					continue;
				else if(s.count(board[j][k]))
					return false;
				else
					s.insert(board[j][k]);
				}
			}

		}
		return true;
    }
};

int main()
{


	system("pause");
	return 0;
}