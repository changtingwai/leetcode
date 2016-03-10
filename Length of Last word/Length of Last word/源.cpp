#include <iostream>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
		int len=s.length();
		if(len<=0)
			return 0;
		int i=len-1;
		while(s[i]==' ')
		{
			len--;
			i--;
		}
		int count=0;
		while(i>=0)
		{
			if(s[i]!=' ')
			{
				count++;
				i--;
			}
				
			else break;
		}
		return count;
    }
};
int main()
{
	system("pause");
	return 0;
}