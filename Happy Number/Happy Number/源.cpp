#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <hash_set>
# include <set>
using namespace std;
class Solution {
	int sum;
	int flag;
public:
	Solution()
	{
		sum=0;
		flag=0;
	}
	bool setValue(int m){
	
		hash_set<int> table;
		if(table.count(m))
			return false;
		else 
		{
		table.insert(m);
		return true;
		}

			
	}
    bool isHappy(int n) 
	{
	if(n<=0 )
		return false;
	if(n>=INT_MAX) 
		return false;
	else 
	{
		if(n==1)
			return true;
		else
		{
			sum=0;
			if(n/10>0)
			{
				while(n/10>0)
				{
					sum+=pow(n%10,2);
					n=n/10;
				}
				
			}	
			sum+=pow(n%10,2);
		}
		if (sum==1)
			flag=1;
		else{
			if(setValue(sum))
				isHappy(sum);
			else
				return false;
			 }
	return flag;
	}
		
		
	}
		
};
int main()
{
	
	Solution s;
	int a=pow(21/10,2);
	cout<<a<<endl;
	cout<<s.isHappy(2);
	system("pause");
	return 0;

}