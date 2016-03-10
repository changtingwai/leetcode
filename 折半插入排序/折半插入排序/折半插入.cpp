#include <iostream>
#include <stdlib.h>
using namespace std;
void Binsort(int r[],int n)
{
	int i,j,low,high,mid;
	for(i=2;i<=n;i++)
	{
		r[0]=r[i];//r[0]Îª¸ÚÉÚ
		low=1;high=i-1;
		while(low<high)
		{
			mid=(low+high)/2;
			if(r[0]<r[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		for(j=i-1;j>low;j--)
			r[j+1]=r[j];
		r[low]=r[0];

	}
}
int main()
{
	const int n=5;
	int r[n];
	for(int k=1;k<=n;k++)
		{
			cin>>r[k];
			Binsort(r,n);
		}
	for(int k=1;k<=n;k++)
		cout<<r[k];
	
	system("pause");
	return 0;

}