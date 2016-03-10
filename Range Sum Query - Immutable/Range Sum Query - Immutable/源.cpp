#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class NumArray {
public:
	vector<int> res;
	int sum ;
    NumArray(vector<int> &nums) {
		sum=0;
		res.resize(nums.size());
		for(int k=0;k<nums.size();k++)
		{
			sum+=nums[k];
			res[k]=sum;
		}

    }

    int sumRange(int i, int j) {

		return i==0?res[j]:res[j]-res[i-1];
    }
};
int main()
{
	system("pasue");
	return 0;
}