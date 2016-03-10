#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
		int n=strs.size();
		int i=0,j=0;
		string res;
		if(n==0)
			return "";

		bool flag=0;
		char temp=strs[0][0];
		while(1)
		{
			for(i=0;i<n;i++)
			{
				if(strs[i][j]!=temp||j>=strs[i].size())
				{
					flag =1;
					break;
				}
			}
			if(i==n)
			{
				res.push_back(temp);
				j++;
				i=0;
				temp=strs[0][j];
			}
			else 
				break;
		
		}
		return res;
    }
};
int main()
{
	string str="";
	vector<string> v(str,0);
	system("pause");
	return 0;
}