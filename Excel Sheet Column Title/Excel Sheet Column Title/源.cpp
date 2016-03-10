#include <iostream>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
		string tmp;
		int r=0;
		while(n)
		{
			r=n%26;
			n/=26;
			if(r==0)
			{
				tmp.push_back('Z');
				n--;
			}
			else
			{
				tmp.push_back('A'+r-1);
			}
		}
		string res;
		int tail=tmp.size()-1;
		while(tail>=0)
		{
			res.push_back(tmp[tail--]);

		}
		return res;
    }
};