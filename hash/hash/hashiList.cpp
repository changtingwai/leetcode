#include <iostream>
#include <stdlib.h>
using namespace std;
#define M 11//ɢ�б���
#define N 8//�������
typedef struct hterm
{
	int key;//�ؼ��ֵ�ֵ
	int si;//ɢ�д���
}Hash;

Hash hashlist[M+1];
int i,address,sum,d,x[N+1];
float average;

int main()
{
	for(i=1;i<=M;i++)
	{
		hashlist[i].key=0;
		hashlist[i].si=0;
	}
	x[1]=22;x[2]=41;x[3]=53;
	x[4]=46;x[5]=30;x[6]=13;
	x[7]=1;x[8]=67;
	for(i=1;i<=N;i++)
	{
		sum=0;
		address=(3*x[i])%M;
		d=address;
		if(hashlist[address].key==0)
		{
			hashlist[address].key=x[i];
			hashlist[address].si=1;
		}
		else
		{
			do
			{
				d=(d+(x[i]*7)%10+1)%11;
				sum++;
			}while(hashlist[d].key!=0);
			hashlist[d].key=x[i];
			hashlist[d].si=sum+1;
		}
		
	}
	cout<<"��ϣ���ַ��";
	for(i=0;i<M;i++)
		cout<<i<<" ";
	cout<<endl;
	cout<<"��ϣ��ؼ��֣�";
	for(i=0;i<M;i++)
		cout<<hashlist[i].key<<" ";
	cout<<endl;
	cout<<"�������ȣ�";
	for(i=0;i<M;i++)
		cout<<hashlist[i].si<<" ";
	cout<<endl;

	system("pause");
return 0;}