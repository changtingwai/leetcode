#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
		int line=array[0].size();
		int column=array.size();
		int j=line-1;
		for(int i=0;i<column;i++)
		{
			if(array[i][j]<target)
				continue;
			else
			{
				if( check(array[i],0,array[i].size()-1,target)==1)
					return 1;
				else if (i==column-1)
					return 0;
				else
					continue;

			}
		}
    }
	bool check(vector<int> &arr ,int m,int n,int target)
	{
		if(m>n)
			return 0;
		int mid=(m+n)/2;
		if(arr[mid]==target)
			return 1;
		else if(target<arr[mid])
		{
			n=mid-1;
			return check(arr,m,n,target);
		}
		else
		{
			m=mid+1;
			return check(arr,m,n,target);
		}

	}
};