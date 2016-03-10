#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    int singleNumber(vector<int>& nums) {
		if(nums.size()==1)
			return nums[0];
		quicksort(nums,0,nums.size()-1);
		int i=1;
		while(nums[i-1]==nums[i]&&i<nums.size())
			i+=2;
			
		return nums[i-1];
		
    }
	void quicksort(vector<int>& nums,int left,int right){
		if(left<right)
		{
			int key=nums[left];
			int low=left;
			int high=right;
			while(low<high)
			{
				while(low<high&&nums[high]>=key)
					high--;
				if(low<high)
				{
					nums[low]=nums[high];
					low++;
				}
				
				while(low<high&&nums[low]<=key)
					low++;
				nums[high]=nums[low];
			}
			nums[low]=key;
			quicksort(nums,left,low-1);
			quicksort(nums,low+1,right);
		}
	}
};
int main()
{
	int a[]={2,2,1};
	vector<int>v(a,a+3);
	Solution s;
	s.quicksort(v,0,2);
	cout<<v[0]<<v[1]<<v[2];

}