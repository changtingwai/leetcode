# include <iostream>
#include <stdlib.h>
using namespace std;
int count;
int climbStairs1(int n) {
    int prev=0;
	int cur=1;
	for(int i=1;i<=n;++i)
	{
		int tmp=cur;
		cur+=prev;
		prev=tmp;
	}
	return cur;
}
int climbStairs(int n) {
	if(n==1)
		return 1;
	else if(n==0)
		return 1;
	else 
	return climbStairs(n-1)+climbStairs(n-2);
}



int main()
{

	cout<<climbStairs(10);
	cout<<"hello world"<<endl;
	system("pause");
	return 0;
}