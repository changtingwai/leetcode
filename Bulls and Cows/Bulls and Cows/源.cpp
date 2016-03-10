#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <map>
using namespace std;
class Solution {
public:
    string getHint(string secret, string guess) {
		string res_s;
		string res_g;
		int bull=0;
		int cow=0;
		int temp=0;
		map<int,int>m;
		for(int i=0;i<secret.size();i++)
		{
			if(m.count(secret[i]))
			{
				temp=m[secret[i]]+1;
				m[secret[i]]=temp;
			}
			else
			{
				m[secret[i]]=1;
			}
		}
		for(int i=0;i<secret.size();i++)
		{
			if(guess[i]==secret[i])
			{
				bull++;
				temp=m[secret[i]]-1;
				m[secret[i]]=temp;
			}
			else
			{
				res_s.push_back(secret[i]);
				res_g.push_back(guess[i]);
			}
		}
		for(int i=0;i<res_s.size();i++)
		{
			if(m.count(res_g[i])&&m[res_g[i]]>0)
				{
					cow++;
					temp=m[res_g[i]]-1;
					m[res_g[i]]=temp;
				}
		}


		stringstream ss;
		ss<<bull<<"A"<<cow<<"B";
		return ss.str();
    }
};
int main()
{
	Solution s;
	s.getHint("1122","1221");
	return 0;
}