#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		if (nums.size()==0)
			return false;
		set<int> hs;
		int i;
		for ( i=0;i<nums.size();i++)
		{	
			if(hs.count(nums[i]))
			{
				return true;
			}
			else 
				hs.insert(nums[i]);

		}
		return false;
        
    }
};
int main()
{

	Solution s1;
	int a[]={0};
	int i=0;
	//for(i=0;i<5;i++)
	//	cout<<i;
	cout<<s1.containsDuplicate(vector<int>(a,a+4));
	system("pause");
	return 0;
}