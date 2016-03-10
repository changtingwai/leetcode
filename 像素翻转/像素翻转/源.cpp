#include <iostream>
using namespace std;
#include <vector>
class Transform {
public:
    vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
        // write code here
		vector<vector<int>> res;
		res=mat;
		int line=mat.size();
		int column=mat[0].size();
		vector<int> tmp;
		for(int i=0;i<line;i++)
		{
			tmp=mat[i];
			for(int j=0;j<column;j++)
			{
				res[j][column-i-1]=tmp[j];
			}
		}
		return res;
		
    }
};