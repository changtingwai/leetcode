#include <iostream>
using namespace std;
bool isBadVersion(int version);
class Solution {
public:
    int firstBadVersion(int n) {
        int m=1;
		int mid;
		
		while(m+1<n)
		{
			mid=m+(n-m)/2;
			if(isBadVersion(mid))
			{
				n=mid;
			}
			else
			{
				m=mid+1;
			}
			
		}
		return n;
    }

};
int main()
{
	Solution s;
	s.firstBadVersion(5);
	return 0;
}