#include <iostream>
#include <vector>
using namespace std;
//���Ҫ��ת�����������鳤�ȣ�����%
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		k=k%nums.size();
		vector<int> res;

		if(k)
		{
			int i=nums.size()-k;
			int j=0;
			for(j=i;j<nums.size();j++)
				res.push_back(nums[j]);
			for(j=0;j<i;j++)
				res.push_back(nums[j]);
			nums=res;
		}
    }
};
int main()
{
	return 0;
}