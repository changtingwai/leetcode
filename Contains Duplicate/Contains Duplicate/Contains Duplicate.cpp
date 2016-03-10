#include <iostream>
#include <stdlib.h>
using namespace std;
void quicksort(int *nums,int low,int high)
{
	int i,j,k;
	i=low;
	j=high;
	k=1;
	int x;
	x=nums[i];
	while(i<j)
	{
		while(i<j&&nums[j]>=x)
			j--;
		if(i<j)
		{
			nums[i]=nums[j];
			i++;
		}
		while(i<j&&nums[i]<x)
			i++;
		if(i<j)
		{
			nums[j]=nums[i];
			j--;


		}
		nums[i]=x;
		if(low<i) quicksort(nums,low,i-1);
		if(i<high) quicksort(nums,i+1,high);
		
	}

}
bool containsDuplicate(int* nums, int numsSize) 
{
	int i=0;
	
	quicksort(nums,0,numsSize-1);
	while(i<numsSize-1)
		if(nums[i]==nums[i+1])
			return true;
		else
			i++;
	return false;
}
int getArrayLen(int *nums)
{
	return (sizeof(nums)/sizeof(nums[0]));
}
int main()
{
	int r[]={237384,348185,338816,825359,461215,315112,170091};
	bool flag=false;
	int num=getArrayLen(r);
	//cout<<num;
	flag=containsDuplicate(r,7);
	cout<<flag<<endl;
	//quicksort(r,0,5);
	for(int i=0;i<num;i++)
		cout<<r[i]<<" ";
	system("pause");
	return 0;
}