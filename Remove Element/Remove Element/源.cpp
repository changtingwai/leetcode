#include <iostream>
#include <stdlib.h>
#include <Queue>
#include <math.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int num=nums.size();
		int i=0;
		int temp=0;
		int j=nums.size();
		for(i=0;i<num;i++)
			if(nums[i]==val)
			{
				temp=i;
				while(temp<j-1)
				{
					nums[temp]=nums[temp+1];
					temp++;
				}
				num--;
			}
		return num;
				
    }
};
int main()
{
	int a[]={1,2,3};
	Solution s;
	vector<int> v(a,a+2);
	cout<<s.removeElement(v ,2);
	system("pause");
	return 0;
}