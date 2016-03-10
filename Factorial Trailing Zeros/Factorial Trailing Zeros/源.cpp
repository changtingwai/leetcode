#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
		while(n>=5)
		{
			n/=5;
			count+=n;

		}
		return count;
    }
};
int main()
{
	Solution s;
	int a[]={1,2};
	vector<int> v(a,a+2);
	system("pause");
		return 0;
}