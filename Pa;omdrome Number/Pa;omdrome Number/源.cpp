#include <iostream>
#include <stdlib.h>
#include <vector>
#include<queue>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
		if(x<0)
			return false;
		if(x==0)
			return true;
		int len=0;
		int temp;
		temp=x;
		int val=1;
		int mod=1;
		while(temp/10>0)
		{
			len++;
			val*=10;
			temp/=10;
		}
		len++;
		temp=x;
		for(int i=0;i<len/2;i++)
		{
			if(temp/val%10!=temp/mod%10)
				return false;
			else
			{
				val/=10;
				mod*=10;
			}
		}
		return true;
    }
};

int main()
{
	Solution s;
	cout<<s.isPalindrome(1211);


	system("pause");
		return 0;
}