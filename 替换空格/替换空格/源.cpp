#include <iostream>
using namespace std;
class Solution {
public:
	void replaceSpace(string str,int length) {
		char *p = new char; 
		int j=length-1;
		for(int i=0;i<length;i++)
		{
			if(str[i]==' ')
			{
				str[i]='%';
				i++;
				for(int k=2;k>0;k--)
				{
					j=length-1;
					for(;j>=i;j--)
					{
						str[j+1]=str[j];
					
					}
					if(k==2) str[i]='2';
					if(k==1) str[i]='0';
					length++;
					i++;
				}
				i--;

			}
		}
	}
};
int main()
{
	Solution s;
	s.replaceSpace("hello  world      ",11);
	return 0;
}