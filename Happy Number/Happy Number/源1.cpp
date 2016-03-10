#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <hash_set>
# include <set>
using namespace std;
class Solution {
	int sum;
public:
	Solution()
	{
		sum=0;
	}
	int setValue(int n){
		sum=0;
		while(n/10>0)
		{
			sum+=pow(n%10,2);
			n=n/10;
		}
		sum+=pow(n%10,2);	
		return sum;
			
			
	}
    bool isHappy(int n) 
	{
		if(n<=0)
			return false;
		set<int> table;
		while (n<=INT_MAX)
		{
			if(table.count(n))
				return false ;
			else
				table.insert(n);
			n=setValue(n);
			if(n==1) 
				return true;
		}
		return false;
	}

		
};
int main()
{
	
	Solution s;
	int a=pow(21/10,2);
	cout<<a<<endl;
	cout<<s.isHappy(19);
	system("pause");
	return 0;

}