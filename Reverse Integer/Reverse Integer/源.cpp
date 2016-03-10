#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:
    int reverse(int x) {
		if(x==0)
			return 0;
        int sign=1;
		long long result=0;
		if(x>0) sign=1;
		if(x<0) sign=-1;
		queue<int> s;
		int tmp=abs(x);
		while(tmp>0)
		{
			result+=(tmp%10);
			tmp=tmp/10;
			result*=10;
		}
		result/=10;
		if(result > INT_MAX)return 0;
		return result*sign;
    }
};
int main()
{
	return 0;
}