#include <iostream>
#include <stdlib.h>
#include <Queue>
#include <math.h>
#include <set>
using namespace std;
class Solution {
public:
    int removeDuplicates_back(vector<int>& nums) {

        int i=0;
		int size=nums.size();
		if(size==0)
			return 0;
		int temp=0;
		for (i=1;i<size;i++)
		{
			if(nums[i-1]==nums[i])
			{
				temp=i;
				while(temp<size-1)
				{
					nums[temp]=nums[temp+1];
					temp++;
				}
				i--;
				size--;

			}
		}
		return size;
    }
	 int removeDuplicates_back2(vector<int>& nums) {
		int i=0;
		int size=nums.size();
		if(size==0)
			return 0;
		 set<int> s;
		 for(i=0;i<size;i++)
		 {
			 if(!s.count(nums[i]))
				s.insert(nums[i]);

		 }
		 return s.size();
		 
    }

	 int removeDuplicates(vector<int>& nums) {
		 if(nums.size()<=1)
			 return nums.size();
		int pre=0;
		int cur=1;
		while(cur<nums.size())
		{
			if(nums[cur]==nums[cur-1])
			{
				cur++;
				continue;
			}
			nums[pre]=nums[cur];
			pre++;
			cur++;
		}
		return pre+1;
		 
    }
};
int main()
{
	int a[]={1,1,2,3,4,5,6,7,7,8,8,8};
	vector<int> v(a,a+12);
	Solution s;
	cout<<s.removeDuplicates(v);
	system("pause");
	return 0;
}