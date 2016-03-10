#include <iostream>
#include <stdlib.h>
#include<stack>
#include<map>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
		map<char,char> mp;
		mp[')']='(';
		mp[']']='[';
		mp['}']='{';
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='('||s[i]=='{'||s[i]=='[')
				stk.push(s[i]);
			if(s[i]==')'||s[i]=='}'||s[i]==']')
			{
				if(stk.empty())
					return false;
				else
				{
					if(mp[s[i]]!=stk.top())
						return false;
					else
					{
						stk.pop();
					}
				}
			}
		}
		if(stk.empty())
			return true;
		else
			return false;
    }
};
int main()
{
	string s="()";
	Solution so;
	so.isValid(s);
	system("pause");
	return 0;
}