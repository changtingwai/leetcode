#include <iostream>
#include <stdlib.h>
#include< set>
using namespace std;
//int main()
//{
//	int i,sum=0;
//	int max=0;
//	int data[]={ -2, 11, -4, 13, -5, -2 };
//	for(i=0;i<6;i++)
//	{
//		sum+=data[i];
//		if(sum>max)
//			max=sum;
//		if(sum<0)
//			sum=0;
//	}
//	cout<<max;
//	system("pause");
//	return 0;
//}
class Solution {
public:
    int singleNumber(int A[], int n) {
        set<int> s;
		int i=0;
		for(i=0;i<n;i++)
		{
			if(!s.count(A[i]))
				s.insert(A[i]);
			
		}
    }
};


void FormatString(char str[],int len){
	int i=1;
	int temp=0;
	while(i<len-1)
	{
		str[i]=str[i+1];
	}
	str[len-2]=str[len-1];
	int size=len-2;
	char ch;
	
	for (i=1;i<size;i++)
	{
		if(str[i]==' '&&str[i-1]==' ')
		{
			temp=i;
			while(temp<size-1)
				str[temp]=str[temp+1];

		}

	}
}
int main()
{
	char ch[]={", ,i, ,a,m, ,a, , , ,l,i,t,t,l,e, ,b,o,y, ,"};
FormatString(ch,23);
for(int i=0;i<23;i++)
	cout<<ch[i]<<' ';
	system("pause");
    return 0;
}