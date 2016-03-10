#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct hftreenode
{
	int data;
	int lch,rch;
	int tag;//tag=0,��������tag=1���Ѳ�������
}hfTreeNode;
hfTreeNode r[20];

int huffman(hfTreeNode r[20])
{
	int t=0;//huffman�����ڵ�
	int i,j,n;
	int x1,x2;//x1Ϊ��Сֵ��Ԫ�±��,x2Ϊ��Сֵ��Ԫ�±��
	int m1,m2;//m1Ϊ��Сֵ��Ԫ,m2Ϊ��Сֵ��Ԫ
	cout<<"n=";
	cin>>n;//nΪҶ�ӽ����
	cout<<endl;
	for(j=1;j<=n;j++)
		{
			cin>>r[j].data;
			r[j].tag=0;
			r[j].lch=0;
			r[j].rch=0;
		}
	i=0;
	while(i<n-1)//�ϲ�n-1��
	{
		x1=0;m1=32767;
		x2=0;m2=32767;
		for(j=1;j<=n+i;j++)
		{
			if((r[j].data<m1)&&(r[j].tag==0))
			{
				m2=m1;x2=x1;
				m1=r[j].data;x1=j;
			}
			else if((r[j].data<m2)&&(r[j].tag==0))
			{
				m2=r[j].data;x2=j;
			}
		}
		r[x1].tag=1;
		r[x2].tag=1;
		i++;
		r[n+i].data=r[x1].data+r[x2].data;
		r[n+i].tag=0;
		r[n+i].lch=x1;
		r[n+i].rch=x2;

	}
	t=2*n-1;
	
}
int main()
{
	cout<<"hi";
	system("pause");
	return 0;
}