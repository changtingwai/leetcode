#include <iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
		int n=haystack.size();
		int m=needle.size();
		if(n==0||m==0) return 0;
		if(m>n) return -1;
		for(int i=0;i<=n-m;i++)
		{
			int j=0;
			for(;j<m;j++)
			{
				if(needle[j]!=haystack[j+i])
					break;
			}
			if(j==m) return i;
		}
		return -1;
		
    }
};
int main()
{
	
}