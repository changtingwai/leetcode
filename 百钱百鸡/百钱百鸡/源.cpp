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
				cout<<"公鸡="<<x<<","<<"母鸡="<<y<<","<<"小鸡="<<z<<endl;
		}
	}
}
void operatorMatch()
{
	int j,i[5];//数组i表示4个运算符
	int sign;//累加运算符时的符号
	int result;
	int count = 0;//统计符合条件的答案数
	int num[6];//保存操作数
	

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