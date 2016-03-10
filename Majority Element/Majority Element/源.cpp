#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int majorityElement(int* nums, int numsSize) {
	int size=numsSize/2+1;
	int i=0;int j=0;int k=0;
	int count=0;
	int temp;
	int result[100];
	for(i=0;i<100;i++)
		result[i]=0;
	for(i=0;i<numsSize;i++)
	{
		temp=nums[i];
		if(temp!=INT_MAX)
		{
			count=1;
			for(j=i+1;j<numsSize;j++)
				if(nums[j]==temp)
				{
					count++;
					nums[j]=INT_MAX;
				}

		}
		else
			continue;
		if (count>=size)
		{
			result[k]=temp;
			k++;
		}
		count=0;
			

	}
	return result[0];
}
int main()
{

	int nums[]={8,8,7,7,7};
	int k=majorityElement(nums,5);
	cout<<k;
	system("pause");
	return 0;
}