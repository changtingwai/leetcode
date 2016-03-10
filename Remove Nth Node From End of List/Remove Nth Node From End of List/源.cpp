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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *pre;
		ListNode *temp;
		ListNode *cur;
		pre=head;
		cur=head;
		for(int i=0;i<n;i++)
			pre=pre->next;
		while(pre!=NULL)
		{
			pre=pre->next;
			temp=cur;
			cur=cur->next;
		}
		if(cur==head)
		{
			head=head->next;
		}
		else
		{
			temp->next=temp->next->next;
		}
		return head;
    }
};
int main()
{
	system("pause");
	return 0;
}