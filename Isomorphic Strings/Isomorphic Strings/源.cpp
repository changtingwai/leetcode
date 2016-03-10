#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
		map<char,char> tar;
		int num=s.size();
		if(num==0)
			return true;
		for(int i=0;i<num;i++)
		{
			if(mp.count(s[i])||tar.count(t[i]))
			{
				if(mp[s[i]]!=t[i]||tar[t[i]]!=s[i])
					return false;
			}
			else
			{
				mp[s[i]]=t[i];
				tar[t[i]]=s[i];
			}
		}
		return true;
    }
};
int main()
{
	string s="()";
	Solution so;
	system("pause");
	return 0;
}