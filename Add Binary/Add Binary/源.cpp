#include <iostream>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
		string res;
		if(a.size()==0)
			return b;
		if(b.size()==0)
			return a;

		int la=a.size()-1;
		int lb=b.size()-1;
		int carry=0;
		int tmp;
		while(la>=0&&lb>=0)
		{
			//char�μ�'0'��Int
			int num=(a[la]-'0')+(b[lb]-'0')+carry;
			if(num==2)
			{
				carry=1;
				tmp=0;

			}
			else if(num==3)
			{
				carry=1;
				tmp=1;
			}
			else
			{
				carry=0;
				tmp=num;
			}
			//int�μ�'0'���char
			res.insert(res.begin(),tmp+'0');
			la--;
			lb--;
		}
		while(la>=0)
		{
			int num=(a[la]-'0')+carry;
			if(num==2)
			{
				carry=1;
				tmp=0;
			}
			else
			{
				carry=0;
				tmp=num;
			}
			res.insert(res.begin(),tmp+'0');
			la--;
		}
		while(lb>=0)
		{
			int num=(b[lb]-'0')+carry;
			if(num==2)
			{
				carry=1;
				tmp=0;
			}
			else
			{
				carry=0;
				tmp=num;
			}
			res.insert(res.begin(),tmp+'0');
			lb--;
		}
		if(carry==1)
		{
			res.insert(res.begin(),'1');
		}



		return res;
    }
};
int main()
{

}