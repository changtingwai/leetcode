#include <iostream>
#include <stdlib.h>
#include <map>
#include <string>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string> mp;
		map<string,char> tar;
		string s;
		int j=0;
		int k=0;
		int i=0;
		int num=str.size();
		for(i=0;i<=num;i++)
		{
			if(str[i]==' '||i==num)
			{
			if(mp.count(pattern[k])||tar.count(s))
				{
					
					if (mp[pattern[k]]!=s||tar[s]!=pattern[k])
						return false;
					else
					{
						k++;
						j=0;
						s.clear();
					}
				}
				else if(i==num&&k!=pattern.size()-1)
					return false;
				else
				{
					mp[pattern[k]]=s;
					tar[s]=pattern[k];
					k++;
					j=0;
					s.clear();
				}
			}
			else
			{
				s.resize(j+1);
				s[j]=str[i];
				j++;
			}
		}
		return true;
    }
};
int main()
{
	string s="()";
	Solution so;
	so.wordPattern("jquery","jquery");
	system("pause");
	return 0;
}