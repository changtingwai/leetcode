
#include <iostream>
#include <stdlib.h>
using namespace std;
 struct ListNode {
    int val;
    struct ListNode *next;
 };
 
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *p;
	struct ListNode *q;
	p=head;
	if(p==NULL)
		return head;
	while(p->next!=NULL)
	{
		if(p->val==p->next->val)
		{
			q=p->next;
			p->next=q->next;
			free(q);
			
		}
		else
			p=p->next;
	}

		return head;
}
int main()
{

	system("pause");
	return 0;
}