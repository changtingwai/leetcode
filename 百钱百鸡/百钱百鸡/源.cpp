#include <iostream>
#include <stdlib.h>
using namespace std;
void buyChicken()
{
	int x,y,z;
	for(x=0;x<=20;x++)
	{
		for(y=0;y<=33;y++)
		{
			z=100-x-y;
			if(z%3==0&&5*x+3*y+z/3==100)
				cout<<"����="<<x<<","<<"ĸ��="<<y<<","<<"С��="<<z<<endl;
		}
	}
}
void operatorMatch()
{
	int j,i[5];//����i��ʾ4�������
	int sign;//�ۼ������ʱ�ķ���
	int result;
	int count = 0;//ͳ�Ʒ��������Ĵ���
	int num[6];//���������
	

}
void fibonaci()
{
	int i;
	const int NUM=13;
	long fib[NUM]={1,1};
	for(i=2;i<NUM;i++)
		fib[i]=fib[i-2]+fib[i-1];
	for(i=0;i<NUM;i++)
		cout<<fib[i]<<" ";
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{

	cout<<fact(6)<<endl;
	system("pause");
		return 0;
}