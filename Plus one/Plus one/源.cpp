#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		vector<int>res(digits.size(),0);
		int i=0;
		int sum=0;
		int carry=1;
		for(i=digits.size()-1;i>=0;i--)
		{
			sum=carry+digits[i];
			carry=sum/10;
			res[i]=sum%10;
		}
		if(carry>0)
			res.insert(res.begin(),carry);
		return res;

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