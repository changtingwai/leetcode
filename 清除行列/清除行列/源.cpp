#include <iostream>
#include <vector>
using namespace std;
class Clearer {
public:
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
        // write code here
		vector<bool>x;
		vector<bool>y;
		int line=mat.size();
		int row=mat[0].size();
		int i,j;
		x.resize(line);
		y.resize(row);
		for(int k=0;k<line;k++)
		{
			x[k]=false;
		}
		for(int k=0;k<row;k++)
		{
			y[k]=false;
		}
		
		for( i=0;i<line;i++)
		{
			for( j=0;j<row;j++)
			{
				if(mat[i][j]==0)
				{
					x[i]=true;
					y[j]=true;
				}
				
				
			}
		}
		for( i=0;i<line;i++)
		{
			for( j=0;j<row;j++)
			{
				if(x[i]||y[j])
				{
					 mat[i][j]=0;
				}
				
			}
		}
		return mat;
    }
};
int main()
{
	
}