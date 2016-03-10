#include <iostream>
#include <stdlib.h>
using namespace std;
void moveZeroes(int* nums, int numsSize) 
{
	int i=0;int j=numsSize-1;int k=0;
	
	while(i<=j)
	{
		if(nums[i]==0)
		{
			for(k=i;k<j;k++)
			{
				nums[k]=nums[k+1];
			}
			nums[j]=0;
			j--;
			i=0;	
		}
		else
			i++;
	}
}
int main()
{
	int r[]={0,1,0,3,12};
	int numSize=5;
	int r1[]={0,0,1};
	int numSize1=3;
	moveZeroes(r1,numSize1);
	for(int i=0;i<numSize1;i++)
	{
		cout<<r1[i]<<" ";
	}
	system("pause");
	return 0;
}
