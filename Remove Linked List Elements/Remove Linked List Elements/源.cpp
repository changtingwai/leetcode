#include <iostream>
#include <stdlib.h>

using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
		if(head==NULL)
			return NULL;
        ListNode* p;
		ListNode* pre=head;
		
		p=head;
		while(p!=NULL)
		{
			if(p->val==val)
			{
				if(p==head)
				{
					p=head->next;
					pre=head->next;
					head=head->next;
				}
				else
				{
					pre->next=p->next;
					p=pre->next;
				}

			}
			else
			{
				pre=p;
				p=p->next;
			}
		}
		return head;
    }
};
int main()
{
	string s="()";
	Solution so;
	system("pause");
	return 0;
}