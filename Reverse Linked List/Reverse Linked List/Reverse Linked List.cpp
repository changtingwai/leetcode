#include<iostream>
using namespace std;
 struct ListNode {
     int val;
	 struct ListNode *next;
 };

struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
        return head;
   struct ListNode *temp,*h,*p;
	h=head;
	p=head->next;
	h->next=NULL;
	while(p!=NULL)
	{
		temp=p->next;
		p->next=h;
		h=p;
		p=temp;
	}
	return h;
}