#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
		int j=0;
		int k=0;
		while(1)
		{
			if(i==m) {
				k=m;
				while(j<n)
				{	
					nums1[k]=nums2[j];
					k++;
					j++;
				}
				break;
			}
			if(j==n)
				break;
			if(nums1[i]>nums2[j])
			{
				for(k=m-1;k>=i;k--)
					nums1[k+1]=nums1[k];
				nums1[i]=nums2[j];
				j++;
				i++;
				m++;
			}
			else 
			{
				i++;
			}
		
		}
    }
};
int main()
{
	system("pause");
	return 0;
}