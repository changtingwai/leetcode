#include <iostream>
#include <stdlib.h>
using namespace std;
int addDigits(int num) {
 
	int sum=0;
	while((num<0)||(num>9))
	{
		sum=sum+num%10;
		num=num/10;

	}
	sum=sum+num;
	if(sum<10)
		return sum;
	else
		addDigits(sum);
}
int main()
{
	int m;
	m=addDigits(38);
	cout<<m;
	system("pause");
	return 0;
}