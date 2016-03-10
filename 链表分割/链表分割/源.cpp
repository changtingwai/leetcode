#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
		ListNode* front=new ListNode(0);
		ListNode* f;
		f=front;
		ListNode* tail=new ListNode(0);
		ListNode* t;
		t=tail;
		ListNode* p;
		p=pHead;
		while(p!=NULL)
		{
			ListNode* tmp=new ListNode(p->val);
			if(p->val<x)
			{
				front->next=tmp;
				front=front->next;
			}
			else
			{
				tail->next=tmp;
				tail=tail->next;
			}
			p=p->next;
		}
		front->next=t->next;
		return f;

    }
};