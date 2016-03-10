#include <iostream>
#include <stdlib.h>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> m;
		map<int,int> ::iterator iter;
		if(nums.size()==0)
			return 0;
		int temp=0;
		for(int i=0;i<nums.size();i++)
		{
			if(m.count(nums[i]))
			{
				temp=m[nums[i]];
				if(abs(temp-i)<=k)
					return true;
				else 
				{
					m.erase(nums[i]);
					m[nums[i]]=i;
				}
			}
			else
			{
				m[nums[i]]=i;
				//m.insert(pair<int,int> (1,2));
			}
		}
		return false;
    }
};
int main()
{
	system("pause");
	return 0;
}