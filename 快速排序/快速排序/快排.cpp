#include <iostream>
using namespace std;
#include <stdlib.h>
void sift(int *r,int l,int m)
{
	//����n��Ԫ�ص�����r�еĵ�LԪ�ؽ���ɸѡ
	int i,j;
	int x;
	i=l;
	j=2*i;//j��i������
	x=r[i];//��ɸѡ����ֵ�������
	while(j<=m)
	{
		if(j<m&&r[j]<r[j+1])
			j++;
		if(x<r[j])
		{
			r[i]=r[j];
			i=j;
			i=2*i;
		}
		else
			j=m+1;//����С�ں���ʱ�˳�ѭ��
	}
	r[i]=x;
}
void SelectSort(int *r,int n)
{
	int temp;
	int i,j;
	int min=0;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(r[j]<r[min])
				min=j;
		}
		if(min!=i)
		{
		temp=r[i];
		r[i]=r[min];
		r[min]=temp;
		}
	}
	
}
void quickSort(int *r,int low,int high)
{
	int i,j;
	int x;
	i=low;
	j=high;
	x=r[low];
	while(i<j)
	{
		//�Ҷ�ɨ��
		while(i<j&&r[j]>=x)
			j--;
		if(i<j)
		{
			r[i]=r[j];
			i++;
		}
		//���ɨ��
		while(i<j&&r[i]<x)
			i++;
		if(i<j)
		{
			r[j]=r[i];
			j--;
		}

	}
	r[i]=x;
	if(low<i)  quickSort(r,low,i-1);
	if(i<high) quickSort(r,j+1,high);
}
int main()
{
	int i=0;
	int r[]={37,19,90,64,13,49,20,40};
	//quickSort(r,0,7);
	SelectSort(r,8);
	for(i=0;i<=7;i++)
		cout<<r[i]<<" ";
	system("pause");
	return 0;
}