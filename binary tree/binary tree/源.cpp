#include <iostream>
using namespace std;
struct BiTNode//����ṹ��
{
    char data;
    struct BiTNode *lchild,*rchild;
};

void later( struct BiTNode *&p) //ǰ�򴴽���
{
    char ch;
    cin>>ch;
    if(ch=='*')
       { p=NULL;
		}
    else
    {
        p=(struct BiTNode *)malloc(sizeof(struct BiTNode));
        p->data=ch;
		later((p-k>lchild));
        later((p->rchild));
    }
}
void print(struct BiTNode *p) //��������������������
{
    if(p!=NULL)
    {
        print(p->lchild);
		cout<<p->data;
        print(p->rchild);
    }
    else
        printf(" ");
}
void main()//������
{
    struct BiTNode *p;
	p=(struct BiTNode *)malloc(sizeof(struct BiTNode));
	//p->data=' ';
	//p->lchild=NULL;
	//p->rchild=NULL;
    later(p);
    print(p);
	system("pause");
}
