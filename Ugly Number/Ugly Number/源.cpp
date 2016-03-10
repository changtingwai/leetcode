#include <iostream>
#include <stdlib.h>
using namespace std;

bool isUgly(int num) {
    if(num<=0)
		return false;
	while(num%2==0)	num/=2;
	while(num%3==0) num/=3;
	while(num%5==0) num/=5;

	return num==1;
		
	
		
}
int main()
{
	int a=7/2;
	cout<<a;
	system("pause");
	return 0;

}