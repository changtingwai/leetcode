#include <iostream>
using namespace std;
class Solution {
public:
    int compareVersion(string version1, string version2) {
		int i=0;
		int j=0;
		int v1=0;
		int v2=0;
		while(1)
		{
			while(i<version1.size()&&version1[i]!='.')
			{
				v1+=version1[i]-'0';
				v1*=10;
				i++;
			}
			while(j<version2.size()&&version2[j]!='.')
			{
				v2+=version2[j]-'0';
				v2*=10;
				j++;
			}
			if(v1<v2)
				return -1;
			if(v1>v2)
				return 1;
			if(v1==v2)
			{
				if(i>=version1.size()&&j>=version2.size())
					return 0;
			}
			v1=0;
			v2=0;
			i++;
			j++;
		
		}
		
    }
};
int main()
{
	Solution s;
	s.compareVersion("1","1.1");
}