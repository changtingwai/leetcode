#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
		stringstream ss;
		vector<string> res;
		if(nums.size()==0)
			return res;
		int *p=new int[nums.size()];
		int j=0;
		p[j]=nums[0];
		j++;
		if(nums.size()==1)
		{
			ss<<nums[0];
			res.push_back(ss.str());
			return res;
		}

		for(int i=1;i<nums.size();i++)
		{
			if(nums[i-1]+1==nums[i])
			{
				p[j]=nums[i];
				j++;
				if(i==nums.size()-1)
				{
					ss<<p[0]<<"->";
					ss<<p[j-1];
					res.push_back(ss.str());
					ss.str("");
					return res;
				}
			}
			else
			{
				if(j>1)
				{
					ss<<p[0]<<"->";
					ss<<p[j-1];
					res.push_back(ss.str());
					ss.str("");
				}
				else
				{
					ss<<(p[0]);
					res.push_back(ss.str());
					ss.str("");
				}
				j=0;
				memset(p,0,nums.size());
				p[j]=nums[i];
				j++;
			}
		}
	        	if(j>1)
				{
					ss<<p[0]<<"->";
					ss<<p[j-1];
					res.push_back(ss.str());
					ss.str("");
				}
				else
				{
					
					ss<<p[0];
					res.push_back(ss.str());
					ss.str("");
				}
		return res;
    }

};
int main()
{
	int a[]={1,3};
	vector<int> nums(a,a+2);
	Solution s;
	s.summaryRanges(nums);
	return 0;
}