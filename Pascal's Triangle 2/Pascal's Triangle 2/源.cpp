#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
		rowIndex+=1;
		vector<vector<int>> vals;
		vals.resize(rowIndex);
		for(int i=0;i<rowIndex;i++)
		{
			vals[i].resize(i+1);
			vals[i][0]=1;
			vals[i][vals[i].size()-1]=1;
			for(int j=1;j<vals[i].size()-1;j++)
			{
				vals[i][j]=vals[i-1][j]+vals[i-1][j-1];
			}
		}
		return vals[rowIndex-1];
    }
};
int main()
{
	Solution s;
	int a[]={1,2};
	vector<int> v=s.getRow(1);
    int count = v.size();
    for (int i = 0; i < count;i++)
    {
        cout << v.at(i) << endl;
    }
	system("pause");
		return 0;
}