#include <iostream>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
		if(n==0||n==1)
			return 0;
        bool *del=new bool[n];
		int count=0;
		del[2]=false;
		for(int i=4;i<n;i=i+2)
			del[i]=true;
		for(int i=3;i<n;i=i+2)
			if(del[i]==false)
			{
				count++;	
				for(int j=2;j*i<n;j++)
					del[i*j]=true;
			}
		return count+1;
    }
};
int	main()
{
	
}