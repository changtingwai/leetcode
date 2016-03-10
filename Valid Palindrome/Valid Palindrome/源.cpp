#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
		
		int len=s.size();
		if(len==0)
			return true;
		int m=0;
		int n=len-1;
		while(m<n)
		{
			if(!isValid(s[m]))
			{
				m++;
				continue;
			}
			if(!isValid(s[n]))
			{
				n--;
				continue;
			}
			if(!isEqual(s[m],s[n]))
			{
				return false;
			}
			m++;
			n--;
		}
		return true;
    }
	bool isValid(char ch){
		if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
			return true;
		else
			return false;
	}
	bool isEqual(char a,char b){
		if(a>='A'&&a<='Z')
			a=a-'A'+'a';
		if(b>='A'&&b<='Z')
			b=b-'A'+'a';
		return a==b;
	}
};
int main()
{
return 0;
}