#include <iostream>
using namespace std;
struct BiTNode//定义结构体
{
    char data;
    struct BiTNode *lchild,*rchild;
};

void later( struct BiTNode *&p) //前序创建树
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
void print(struct BiTNode *p) //中序遍历（输出二叉树）
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
void main()//主函数
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
