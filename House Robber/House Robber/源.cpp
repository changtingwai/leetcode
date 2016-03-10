#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
		if(nums.size()==0)
			return 0;
		int i;
		int dp[100];
		dp[0]=nums[0];
		dp[1]=max(nums[0],nums[1]);
		for(i=2;i<nums.size();i++)
			dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
		return dp[nums.size()-1];
    }
};
int main()
{
	Solution s;
	int a[]={1,2};
	vector<int> v(a,a+2);
	cout<<s.rob(v);
	system("pause");
		return 0;
}