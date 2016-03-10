#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n<1)
			return "";
		string prev="1";
		for(int i=2;i<=2;i++)
		{
			char curChar=prev[0];
			int times=1;//记录curChar出现的次数
			string tmpstr;
			prev.push_back('#');
			for(int k=1;k<prev.size();k++)
			{
				if(prev[k]==curChar)
					times++;
				else
				{
					tmpstr+=to_string(times);
					tmpstr.push_back(curChar);
					curChar=prev[k];
					times=1;
				}
			}
			prev=tmpstr;
		}
		return prev;
    }
};
int main()
{

	system("pause");
	return 0;
}